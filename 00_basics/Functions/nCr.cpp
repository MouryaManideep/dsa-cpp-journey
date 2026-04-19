#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i=1; i<=n; i++)
    {
        fact*= i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int ans;
    r = factorial(r)*factorial(n-r);
    n = factorial(n);
    ans = n/r;

    return ans;
}

int main()
{
    int n, r;
    cout<<"Enter number for nCr to calculate . . . "<<endl;
    cout<<"Enter number 'n' = ";
    cin>>n;
    cout<<"Enter number 'r' = ";
    cin>>r;

    cout<<n<<"C"<<r<<" = "<<nCr(n,r);

    return 0;
}