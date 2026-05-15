#include<iostream>
#include<climits>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int n=5;
    int arr[] = {1, 2, 3, 4 , 5};
    int maxsum = INT_MIN;
    
    for(int start=0; start<n; start++)
    {
        int sum =0;
        for(int end=start; end<n; end++)
        {
            sum += arr[end];
            maxsum = max(sum,maxsum);
        }
    }

    cout<<"Max subarray sum = "<<maxsum;

    return 0;
}