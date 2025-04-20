#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter the number: "<<"";
    cin>>n;
    if(n<=0){
        cout<<"Not a perfect square"<<endl;
    }
    else
    {
       for(int i=1;i*i<=n;i++) // check the number is perfect square or not
       {
          if(i*i==n)
          {
            flag=1;
            break;
          }
        }
        if(flag==1)
        {
           cout<<"Perfect Square"<<endl;
        }
        else
        {
           cout<<"Not a Perfect Square"<<endl;
        }
    }
    return 0;
}