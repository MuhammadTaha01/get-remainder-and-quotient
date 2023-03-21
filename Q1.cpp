#include<iostream>
using namespace std;
int main()
{
    int r,q,num1,num2;
start:
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;

    r=num1%num2;
    cout<<"The Remainder of "<<num1<<" and "<<num2<<" is "<<r<<endl;
    q=num1/num2;
    cout<<"The Quotient of "<<num1<<" and "<<num2<<" is "<<q<<endl;
    goto start;
    return 0;
}
