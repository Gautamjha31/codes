#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the number of pattern :- ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        int j;
        for( j=1; j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for( ;j<=n;j++)  //j=1 has been left because we have to use next from the uper for loop
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }

    cout<<endl;

    }

    return 0;

}