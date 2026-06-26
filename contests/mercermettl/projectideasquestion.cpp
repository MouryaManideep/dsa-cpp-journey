#include<iostream>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int input1= 5;
    int input2= 3;
    int ans = 0;
    
    for(int j=0; j<input2; j++)
    {
        int top=1,bottom1=1,bottom2=1;
        for(int i=1; i<=input1; i++)
        {
            top *= i;
        }
        cout<<"top = "<<top<<endl;
        
        for(int i=1; i<=input2-j; i++)
        {
            bottom1 *= i;
        }
        cout<<"bottom1 = "<<bottom1<<endl;
        
        for(int i=1; i<=input1-input2-j; i++)
        {
            bottom2 *= i;
        }
        cout<<"bottom2 = "<<bottom2<<endl;
        ans += top/(bottom1*bottom2);
        cout<<"ans = "<<ans<<endl;
        cout<<endl;
    }

    cout<<ans<<endl;

    return 0;
}