#include<iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;

    for(int i=1; i<=n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n;
    cout<<"Enter End Number for sun 1-N: ";
    cin>>n;

    cout<<"Sum : "<<sumN(n);
}