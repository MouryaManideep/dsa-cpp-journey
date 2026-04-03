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

int main()
{
    int n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    // trianglePattern_rightangle(n);
    // trianglePattern_numbers(n);
    // trianglePattern_char(n);
    // trianglePattern_continue_numbers(n);
    trianglePattern_continue_numbers_reverse(n);

    return 0;
}