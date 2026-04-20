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

void PrintPrime_2_N (int num)
{
    for(int i=2; i<num; i++)
    {
        if(checkprime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int num;
    cout<<"Enter Ending digit of primes : ";
    cin>>num;
    PrintPrime_2_N(num);

    return 0;
}