#include<iostream>
using namespace std;

int binToDec(int num)
{
    int ans=0, pow=1;

    while(num>0)
    {
        int rem = num%10;
        num /= 10;

        ans += (rem*pow);
        pow *= 2; 
    }

    return ans;
}

int main()
{
    int num;
    cout<<"Enter Number till binary: ";
    cin>>num;

    cout<<num<<" = "<<binToDec(num)<<endl;

    return 0;
}