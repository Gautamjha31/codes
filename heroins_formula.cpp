#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,s;
    double area;
    
    cout<<"Enter the length of 1st side of a triangle :- "<<endl;
    cin>>a;
    cout<<"Enter the length of 2nd side of a triangle :- "<<endl;
    cin>>b;
    cout<<"Enter the length of 3rd side of a triangle :- "<<endl;
    cin>>c;
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"THE AREA OF THE GIVEN TRIANGLE USING HEROIN'S FORMULA IS "<<area<<endl;

return 0;

}