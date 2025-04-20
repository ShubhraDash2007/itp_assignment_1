#include<iostream>
using namespace std;

int main()
{
    int i,j,n,a=0,b;
    cout << "Enter n: " <<"";
    cin >>n;
    for(i=1;i<=n;i++)
    {a++;
     for(j=1;j<=n;j++)
     {b=0;
     while(b<a)
     {cout <<j<<"";
      b++;}}
     cout << " " << endl;
    }
    return 0;
}