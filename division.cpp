#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int divident , divisor,remainder,quotient;
    cout<<"Enter the divident :- ";
    cin>>divident;
    cout<<"Enter the divisor :- ";
    cin>>divisor;
    
    quotient=divident/divisor;
    remainder=divident%divisor;

    cout<<"THE QUOTIENT IS "<<quotient<<endl;
    cout<<"THE REMAINDER IS "<<remainder<<endl;
    
    return 0;

}