#include <iostream>
using namespace std;
void sortArray(int a[], int n) 
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++) 
        {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
    }
    sortArray(a, n);
    cout << "Sorted array:\n";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}