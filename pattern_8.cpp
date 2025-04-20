#include<iostream>
using namespace std;

int main()
{
    int i,j,a,b,n;
    cout << "Enter n: "<<"";
    cin >>n;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {cout <<j<<"";}
      for(b=1;b<=2*(n-i);b++)
      {cout << " "<<"";}
      for(a=i;a>=1;a--)
      {cout <<a<<"";}
      cout<<endl;
    }
  return 0;
}