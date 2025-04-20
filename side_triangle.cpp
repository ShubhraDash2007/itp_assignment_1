#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout << "Enter three sides of a triangle:" << endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a) //Triangle inequality theorem 
    {
    cout << "Triangle can be drawn" << endl;
    // check types of triangle 
     if (a==b && b==c && c==a)
     {
     cout << "It is a equilateral triangle" << endl;
     }
     else if (a==b || b==c || c==a)
     {
     cout<<"It is an isoceles triangle"<<endl;
     }
     else
     {
     cout<<"It is an scalene triangle"<<endl;
     }
    }
    else
    {
    cout<<"triangle can't be drawn"<<endl;
    }
    return 0;
}