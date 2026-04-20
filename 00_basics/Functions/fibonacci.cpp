#include<iostream>
using namespace std;

void printFibonacci(int num)
{
    int a=0;
    int b=1;
    int temp;
    cout<<a<<" "<<b<<" ";

    for(int i=2; i<num; i++)
    {
        temp = a+b;
        a = b;
        b = temp;
        cout<<b<<" ";
    }
}

int main()
{
    int num;
    cout<<"Enter number greater than 2 : ";
    cin>> num;

    if(num<=1)
    {
        cout<<"Enter number greater than 2 !!!!!";
    }
    else
    {
        printFibonacci(num);
    }

    return 0;
}