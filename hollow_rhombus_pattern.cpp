#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the number of pattern :- ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n)
            {
             cout<<"*";    
            }
            else
            {
                if(j==1||j==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }

    cout<<endl;

    }

    return 0;

}