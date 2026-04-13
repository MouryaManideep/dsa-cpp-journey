#include<iostream>
using namespace std;

factorial(int n)
{
    int fact = 1;

    for(int i=1; i<=n; i++)
    {
        fact*= i;
    }

    return fact;
}

int main()
{
    int n;
    cout<<"Enter End Number for N!: ";
    cin>>n;

    cout<<"Sum : "<<factorial(n);
}