#include <iostream>
using namespace std;

void floydtriangle(int n)
{
    int num = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<< endl;
    }
}

void floydtriangle_char(int n)
{
    char c = 'A';
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout<<c<<" ";
            c = c+1;
        }
        cout<< endl;
    }
}

void floydtriangle_char_reverse(int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i; j>=0; j--)
        {
            char c = 'A';
            c = c+j;
            cout<<c<<" ";
        }
        cout<< endl;
    }
}

int main()
{
    int n;
    
    cout<<"Number of rows :";
    cin>>n;

    floydtriangle(n);
    cout<<endl;
    floydtriangle_char(n);
    cout<<endl;
    floydtriangle_char_reverse(n);

    return 0;
}