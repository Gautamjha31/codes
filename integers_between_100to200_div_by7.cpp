#include<iostream>
using namespace std;
int main()
{
    int i, sum=0;
    cout<<"Enter numbers between 100 to 200 :- ";
    for(i=101;i<200;i++)
    {
        if (i%7==0)
        {
         cout<<i<<endl;
         sum+=i;
        }
        
    }
    cout<<"The sum of integers is :- "<< sum <<endl;
    return 0;
}