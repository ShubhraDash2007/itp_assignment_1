#include <iostream>
using namespace std;
int findMaxOccurring(int arr[], int n)
 {
    int maxCount = 0, maxElement;
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) 
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main()
{
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int result = findMaxOccurring(arr, n);
    cout << "Maximum occurring element is: " << result << endl;
    return 0;
}