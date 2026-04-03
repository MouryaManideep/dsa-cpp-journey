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

int main()
{
    int n;
    // cout<<"Enter number of line: ";
    // cin>>n;
    // squarePattern_number(n);

    // cout<<"Enter number of lines of characters : ";
    // cin>>n;
    // squarePattern_char(n);

    // cout<<"Enter number of lines of continue number : ";
    // cin>>n;
    // squarePattern_continue_number(n);

    cout<<"Enter number of lines of continue characters : ";
    cin>>n;
    squarePattern_continue_char(n);

    return 0;
}