#include<iostream>
using namespace std;

bool checkprime(int num)
{
    int i=2;
    while(i < num)
    {
        if(num%i == 0)
        {
            return false;
        }

        i++;
    }

    return true;
}

int main()
{
    int num;
    bool s;
    cout<<"Enter number greater than 1 : ";
    cin>>num;
    s = checkprime(num);

    if(num<=1)
    {
        cout<<num<<" should be greater than 1";
        return 0;
    }

    if(s)
    {
        cout<<num<<" is prime";
    }
    else
    {
        cout<<num<<" is not prime";
    }

    return 0;
}