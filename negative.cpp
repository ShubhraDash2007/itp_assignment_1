#include <iostream>
using namespace std;
void moveNegatives(int arr[], int n) 
{
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            swap(arr[i], arr[j++]);
}
int main() 
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    moveNegatives(arr, n);
    cout << "Array after moving negatives: ";
    for (int i = 0; i < n; i++) cout << arr[i]<<" ";
}