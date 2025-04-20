#include<iostream>
using namespace std;
int main()
{
// to find the largest digit of a number 
    int n,l=0,d;
    cout << "Enter a number :" << ""; 
    cin>>n;
    while(n>0)
    {
    d=n%10;
    if(d>l)
    {
     l=d;
    }
    n/=10;
    }
    cout<<"largest digit is:"<<l<<endl;
    return 0;
}