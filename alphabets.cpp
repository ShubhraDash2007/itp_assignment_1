#include <iostream>
using namespace std;
int main() 
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int letters = 0, digits = 0, specials = 0;
    for (char c : s) 
    {
        if (isalpha(c)) letters++;
        else if (isdigit(c)) digits++;
        else specials++;
    }
    cout << "Alphabets: " << letters << " Digits: " << digits << " Special Characters: " << specials;
}