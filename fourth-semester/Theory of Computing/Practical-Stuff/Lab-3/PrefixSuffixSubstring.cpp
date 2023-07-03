#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length();
    cout << "Prefixes:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << str.substr(0, i) << endl;
    }
    cout << "Suffixes:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << str.substr(n - i, i) << endl;
    }
    cout << "Substrings:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << str.substr(i, j) << endl;
        }
    }

    return 0;
}
