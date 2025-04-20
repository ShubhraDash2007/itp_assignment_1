#include <iostream>
using namespace std;
int main() 
{
    int a[3][3], b[3][3], sum[3][3], ta[3][3], tb[3][3], tSum[3][3];
    cout << "Enter elements of Matrix A (3x3): ";
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> a[i][j];
    cout << "Enter elements of Matrix B (3x3): ";
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> b[i][j];
    cout << "Sum of A and B: ";
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose of Matrix A: ";
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            ta[i][j] = a[j][i];
            cout << ta[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose of Matrix B: ";
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            tb[i][j] = b[j][i];
            cout << tb[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of transposed matrices: ";
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++)
        {
            tSum[i][j] = ta[i][j] + tb[i][j];
            cout << tSum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}