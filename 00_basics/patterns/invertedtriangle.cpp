#include <iostream>
using namespace std;

void invertedtriangle(int n)
{
    
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<i; k++)
        {
            cout<<" "<<" ";
        }

        for(int j=i+1; j<=n; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }   
}

int main()
{
    int n;

    cout<<"Number of rows :";
    cin>>n;

    invertedtriangle(n);

    return 0;
}