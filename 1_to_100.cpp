#include<iostream>
using namespace std;
int main()
{
    int i;
    cout <<"Print 1 to 100"<< endl;
    cout << "Replace multiple of 3 with Fizz" << endl;
    cout << "Replace multiple of 5 with Buzz" << endl;
    cout << "Replace multiple of 3 and 5 both with FizzBuzz" << endl;
    for(i=1; i<=100; i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout << "FizzBuzz" <<" ";
        }
        else if(i%3==0)
        {
            cout << "Fizz"<< " ";
        }
        else if(i%5==0)
        {
            cout << "Buzz" << " ";
        }
        else
        {
            cout<<i<<" ";
        }
    }
    return 0;
}