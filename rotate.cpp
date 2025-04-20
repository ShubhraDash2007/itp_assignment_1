#include <iostream>
using namespace std;
void rotateRight(int arr[], int n, int k) 
{
    k = k % n;
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
int main() 
{
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter value of k: ";
    cin >> k;
    rotateRight(arr, n, k);
    cout << "Array after rotating right: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}