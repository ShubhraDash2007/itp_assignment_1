#include<iostream>
using namespace std;

int main()
{
    int i,j,a,b=1,n;
    cout << "Enter n:" <<" ";
    cin >>n;
    for(i=0;i<3;i++)
    {for(j=1;j<=n;j++)
     {if(j<n)
      {cout<<b<<"*";}
      if(j==n)
      {cout<<b;}
      b++;
     }
     cout<<" "<<endl;
    }
    return 0;
}