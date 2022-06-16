#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int n, sum=0;
 cout<<"Enter the number :-";
 cin>>n;

int x=n; // here the value of n is stored in  y.      
 while(n>0)
 {
    int lastdigit=n%10;
    sum+=pow(lastdigit , 3);
    n=n/10;
 }

if (sum==x)
 {
    cout<<"It is a armstrong number."<<endl;
 }
 else
 cout<<"It is not a armstrong number."<<endl;
return 0;
}