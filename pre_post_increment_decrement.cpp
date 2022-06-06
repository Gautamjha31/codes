#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number :- ";
    cin>>num;
    num++;
    cout<<"After post increment the number is :- "<<num<<endl;
    ++num;
    cout<<"After pre increment the number is :- "<<num<<endl;
    num=num+1;
    cout<<"After increases by 1 the number is :- "<<num<<endl;
    num--;
    cout<<"After post decrement the number is :- "<<num<<endl;
    --num;
    cout<<"After pre decrement the number is :- "<<num<<endl;
    num=num-1;
    cout<<"After decreases by 1  the number is :- "<<num<<endl;

    return 0;
    
}
