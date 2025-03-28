#include<iostream>
using namespace std;
int main()
{
    int subject1 , subject2 , subject3 , subject4 , subject5;
    cout<<"Enter your first subject marks: "; // provide marks out of 100
    cin>>subject1;
    cout<<"Enter your second subject marks: ";
    cin>>subject2;
    cout<<"Enter your third subject marks: ";
    cin>>subject3;
    cout<<"Enter your fourth subject marks: ";
    cin>>subject4;
    cout<<"Enter your fifth subject marks: ";
    cin>>subject5;
    if(subject1<33 || subject2<33 || subject3<33 || subject4<33 || subject5<33)
    
        {
            cout<<"You are fail."<<endl;
        }
    else
    {
        int totalmarks =  subject1 + subject2 + subject3 + subject4 + subject5;
        cout<<"Total marks obtained by the student is: "<<totalmarks<<endl;
        float t=(float)totalmarks;
        float average = t/5;
        cout<<"Average marks obtained by the student is:"<<average<<endl;
        float percentage =average;
        cout<<"Percentage obtained by the student is:"<<percentage<<"%"<<endl;
    }
    return 0;
}