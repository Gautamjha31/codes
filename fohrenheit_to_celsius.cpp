#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float cels, forh;
    cout<<"Enter the temperature in fohrenheit :- "<<endl;
    cin>>forh;
    cels=((forh*5.0)-(5.0*32))/9;
    cout<<"THE TEMPERATURE IN CELSIUS IS "<<cels<<endl;

    return 0;

}