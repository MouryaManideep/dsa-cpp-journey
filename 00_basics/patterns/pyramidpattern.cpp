#include <iostream>
using namespace std;

void pyramidPattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n-i; j>1; j--)
        {
            cout<<" "<<" ";
        }

        for(int j=1; j<=i+1; j++)
        {
            cout<<j<<" ";
        }

        for(int j=0; j<i; j++)
        {
            cout<<j+1<<" ";
        }

        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    
    pyramidPattern(n);

    return 0;
}