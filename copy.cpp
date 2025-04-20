#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int copiedArr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) 
    {
        copiedArr[i] = arr[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << copiedArr[i] << " ";
    }
    cout << endl;
    return 0;
}