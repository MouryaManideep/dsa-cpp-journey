#include<iostream>
#include<iomanip>
using namespace std;
// #include<bits/stdc++.h>

double pow(double base, double exp)
{
    if (exp == 0)
    {
        return 1;
    }
    
    if(exp<0)
    {
        exp = -exp;
        return 1/base * (1/pow(base, exp-1));
    }

    return base * pow(base, exp-1);
}

int main()
{
    double base, exp;
    cout<<"Base : ";
    cin>>base;
    cout<<"Exp : ";
    cin>>exp;

    cout<<base<<"^"<<exp<<" "<<fixed<<setprecision(5)<<pow(base, exp);
    return 0;
}