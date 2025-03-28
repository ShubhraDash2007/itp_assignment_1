#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter three sides of a triangle:"; //Enter using space
    cin>>a>>b>>c;
    if(a==b && b==c) // for equilateral triangle
    {
        cout<<"It is an equilateral triangle."<<endl;
    }
    else if(a==b||b==c||c==a) //for isoceles triangle
    {
        cout<<"It is an isoceles triangle."<<endl;
    }
    else
    {
        cout<<"It is a scalene triangle."<<endl;
    }
    return 0;
}