#include<iostream>
using namespace std;

sumofdigits(int digit)
{
    int sum=0;

    while(digit != 0)
    {
        sum += digit%10;
        digit /= 10;
    }

    return sum;
}

int main()
{
    int num;
    cout<<"Enter a 2+ digit : ";
    cin>>num;

    cout<<sumofdigits(num)<<endl;
}