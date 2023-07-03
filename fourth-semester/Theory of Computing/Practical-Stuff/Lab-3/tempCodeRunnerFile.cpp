#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

// Define the NFA transition function
unordered_set<int> delta(int state, char input)
{
    unordered_set<int> result;
    switch (state)
    {
    case 0:
        if (input == '0')
        {
            result.insert(0);
        }
        result.insert(1);
        break;
    case 1:
        if (input == '1')
        {
            result.insert(2);
        }
        break;
    case 2:
        break;
    default:
        break;
    }
    return result;
}

// Check if a given string is accepted by the NFA
bool accepts(const string &str)
{
    vector<int> current_states = {0};
    for (char input : str)
    {
        vector<int> next_states;
        for (int state : current_states)
        {
            unordered_set<int> next = delta(state, input);
            next_states.insert(next_states.end(), next.begin(), next.end());
        }
        current_states = next_states;
    }
    for (int state : current_states)
    {
        if (state == 2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (accepts(str))
    {
        cout << "Accepted." << endl;
    }
    else
    {
        cout << "Rejected." << endl;
    }
    return 0;
}
