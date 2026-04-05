#include<iostream>
using namespace std;

void hollowDiamondPattern(int n)
{
    // first half from top 0 - n 
    for(int i=0; i<n; i++)
    {
        //spaces
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }

        cout<<"*";

        if(i != 0)
        {
            //spaces
            for(int j=0; j<(2*i) - 1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }

    //second half from <
    for(int i=0; i<n-1; i++)
    {
        //spaces
        for(int j=0; j<i+1; j++)
        {
            cout<<" ";
        }
        cout<<"*";

        for(int j=0; j<2*(n-2-i)-1; j++)
        {
            cout<<" ";
        }

        if(i < n-2)
        {
            cout<<"*";
        }


        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter Number of rows: ";
    cin>>n;

    hollowDiamondPattern(n);

    return 0;
}