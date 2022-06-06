#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , temp;
    cout<<"Enter the first number :- ";
    cin>>num1;
    cout<<"Enter the second number :- ";
    cin>>num2;

    temp=num2;
    num2=num1;
    num1=temp;

    cout<<"AFTER SWAPPING THE NUMBERS :- "<<endl;
    cout<<"FIRST NUMBER IS "<<num1<<endl;
    cout<<"SECOND NUMBER IS "<<num2<<endl;

    return 0;
}