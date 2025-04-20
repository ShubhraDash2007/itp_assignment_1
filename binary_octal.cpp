#include <iostream>
using namespace std;
int main()
{
    int n, temp,i=1,sum=0,rem;
    cout<< "enter a decimal number: ";
    cin>> n;
    int original=n;
    int answer = 0;     
    int power=1;
    while(n>0) // convert decimal to binary
    {
        int digit=n%2;
        answer = answer + (digit*power);
        power = power * 10;
        n=n/2;
    }
    cout<< "binary number is: " << answer << endl;
    temp=original;
    while(temp!=0) //convert decimal to octal
    {
        rem=temp%8;
        sum=sum+i*rem;
        i=i*10;
        temp=temp/8;
    }
   
     cout<< "octal number is: " << sum << endl;

   return 0;
}