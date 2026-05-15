#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n=5;
    int arr[] = {1, 2, 3, 4, 5};

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}