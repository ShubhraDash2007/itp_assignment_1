#include<iostream>
using namespace std;
int main()
{
    float a,b,c,sum;
    cout<<"Enter a three angle : "; //provide an angles in degree
    cin>>a>>b>>c;
    sum=a+b+c;
    if(sum==180)
    {
        cout<<"It is a triangle.";
    }
    else
    {
        cout<<"It is not a triangle.";
    }
    return 0;
}