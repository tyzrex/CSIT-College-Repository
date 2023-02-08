#include <iostream>
#include <string>

using namespace std;

bool is_valid_input(string str)
{
  for (char c : str)
  {
    if (c != 'a' && c != 'b')
    {
      return false;
    }
  }
  return true;
}

// for this DFA, we need to accept the string if it doesn't end with 'ab'
bool is_accepted(string str)
{
  char state = 'A';
  for (char c : str)
  {
    switch (state)
    {
    case 'A':
      state = (c == 'a') ? 'B' : 'A';
      break;
    case 'B':
      state = (c == 'a') ? 'B' : 'C';
      break;
    case 'C':
      state = (c == 'a') ? 'B' : 'A';
    }
  }
  return state != 'C';
}

int main()
{
  string str;
  char choice;
  do
  {
    cout << "Enter a string: ";
    cin >> str;

    if (is_valid_input(str))
    {
      cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
    }
    else
    {
      cout << "Invalid Input" << endl;
    }
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
  } while (choice == 'y');
  return 0;
}
