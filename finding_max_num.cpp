#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers :- ";
    cin>>a>>b>>c;
    if(a>b)
    {
   if(a>c)
    cout<<a <<" is greater then "<< b <<" and "<< c <<endl;
    else
    cout<<c <<" is greater then "<< a <<" and "<< b <<endl;
    }
    else if(b>a)
    {
        if(b>c)
        cout<<b <<" is greater then "<< a <<" and "<< c <<endl;
        else
        cout<<c <<" is greater then "<< a <<" and "<< b <<endl;
    }
    
    return 0;
}