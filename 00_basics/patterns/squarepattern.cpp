#include <iostream>
using namespace std;

void squarePattern_number(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void squarePattern_char(int n)
{
    for(int i=0; i<n; i++)
    {
        char c = 'A';
        for(int j=1; j<=n; j++)
        {
            cout<<c<<" ";
            c = c+1;
        }
        cout<<endl;
    }
}

void squarePattern_continue_number(int n)
{
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void squarePattern_continue_char(int n)
{
    char c = 'A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<c<<" ";
            c= c+1;
        }
        cout<<endl;
    }
}

void hallowsquare(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1 )
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}

void squarePattern_continue_spiral(int n)
{
    if(n>0){
        for(int i=0; i<(2*n)-1; i++)
        {
            for(int j=0; j<(2*n)-1; j++)
            {
                cout<<n - min(min(i,j),min(((2*n)-2-j),((2*n)-2-i)))<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter number of line: ";
    cin>>n;


    squarePattern_number(n);
    cout<<endl;
    squarePattern_char(n);
    cout<<endl;
    squarePattern_continue_number(n);
    cout<<endl;
    squarePattern_continue_char(n);
    cout<<endl;
    hallowsquare(n);
    cout<<endl;
    squarePattern_continue_spiral(n);

    return 0;
}