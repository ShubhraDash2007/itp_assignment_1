#include <iostream>
using namespace std;
int main()
 {
    int a,b;
    cout << "Enter the size of the first array: "<<"";
    cin >> a;
    int arr1[a];
    cout << "Enter elements of the first array: "<<"";
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: "<<"";
    cin >> b;
    int arr2[b];
    cout << "Enter elements of the second array: "<<"";
    for (int i = 0; i < b; i++) 
    {
        cin >> arr2[i];
    }
    int mergedSize = a + b;
    int mergedArray[mergedSize];
    for (int i = 0; i < a; i++) 
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < b; i++) 
    {
        mergedArray[a+i] = arr2[i];
    }
    cout << "Merged array in reverse order: "<<"";
    for (int i = mergedSize - 1; i >= 0; i--) 
    {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}