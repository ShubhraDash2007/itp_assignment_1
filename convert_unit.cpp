#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter length in centimeter: ";
    cin>>length;
    float m = (float)length/ 100; 
    cout << "Length in meters: " <<m<< " meters" << endl;
    float km = (float)length/ 100000; 
    cout << "Length in kilometers: " <<km<< " kilometers" << endl;
    return 0;
}