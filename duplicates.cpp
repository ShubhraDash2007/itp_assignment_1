#include <iostream>
#include <unordered_set>
using namespace std;
int main() 
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    unordered_set<int> distinct;
    for (int i = 0; i < n; i++)
        distinct.insert(arr[i]);
    cout << "Array with distinct elements: ";
    for (int x : distinct) cout << x << " ";
    return 0;
}