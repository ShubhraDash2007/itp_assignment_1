#include <iostream>
using namespace std;
int main() 
{
    string s, result;
    char ch;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter character to remove: ";
    cin >> ch;
    for (char c : s)
    {
        if (c != ch)
        {
            result += c;
        }
    }
    cout << "String after removal: " << result;
    return 0;
}