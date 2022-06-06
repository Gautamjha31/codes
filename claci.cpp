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


        if(ope=='+')
        {
        c=a+b;
        cout<<"THE SUM OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
        }
       else if(ope=='-')
        {
        c=a-b;
        cout<<"THE SUBSTRACTION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
        }
        else if(ope=='*')
        {
        c=a*b;
        cout<<"THE MULTIPLICATION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
        }
        else if(ope=='/')
        {
        c=a/b;
        cout<<"THE DIVISION OF "<< a <<" AND "<< b <<" is " << c <<"."<<endl;
        }
     
    else
    cout<<"YOU ENTERD A WRONG OPERATOR ." <<endl;
    return 0;

}