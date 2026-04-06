#include <iostream>
using namespace std;

void trianglePattern_rightangle(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}

void trianglePattern_numbers(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void trianglePattern_char(int n)
{
    char c = 'A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<c<<" ";
        }
        c = c+1;
        cout<<endl;
    }
}

void trianglePattern_continue_numbers(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void trianglePattern_continue_numbers_reverse(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void trianglePattern_01(int n)
{
    int start = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0) {start = 1;}
        else {start = 0;}

        for(int j=0; j<i+1; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

int main()
{
    int n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    trianglePattern_rightangle(n);
    cout<<endl;
    trianglePattern_numbers(n);
    cout<<endl;
    trianglePattern_char(n);
    cout<<endl;
    trianglePattern_continue_numbers(n);
    cout<<endl;
    trianglePattern_continue_numbers_reverse(n);
    cout<<endl;
    trianglePattern_01(n);

    return 0;
}