#include <iostream>
using namespace std;
int main() 
{
    int a[100], n, INT_MAX;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " distinct elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];
    int first = INT_MAX, second = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < first) 
        {
            second = first;
            first = a[i];
        } else if(a[i] < second && a[i] != first)
        {
            second = a[i];
        }
    }
    cout << "Second smallest element: " << second << endl;
    return 0;
}