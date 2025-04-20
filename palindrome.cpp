#include <iostream>
using namespace std;
int main() 
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int n = s.length();
    int isPalindrome = 1;
    for (int i = 0; i < n / 2; i++) 
    {
        if (s[i] != s[n - i - 1]) 
        {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}