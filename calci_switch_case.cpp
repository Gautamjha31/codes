#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    char ope;

    cout<<"Enter first number :- ";
    cin>>a;

    cout<<"Enter second number :- ";
    cin>>b;

    cout<<"Enter the operation ( from +,-,*,/ ) :- ";
    cin>>ope;

switch (ope)
{
case '+':
    c=a+b;
    cout<<"THE SUM OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
    break;
case '-':
    c=a-b;
    cout<<"THE SUBSTRACTION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
    break;
case '*':
    c=a*b;
    cout<<"THE MULTIPLICATION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
    break;
case '/':
    c=a/b;
    cout<<"THE DIVISION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
    break;

default:
    cout<<"YOU ENTERD A WRONG OPERATOR ." <<endl;
    break;

}

return 0;

}