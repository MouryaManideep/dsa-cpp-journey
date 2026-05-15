#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n=7;
    // int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    vector<int> arr = {-3, 8, -2, 4, -5, 6};
    int cs=arr[0], maxsum=arr[0];

    for(int i=0; i<arr.size(); i++)
    {
        cs = max(arr[i], cs + arr[i]);
        maxsum = max(cs, maxsum);
    }

    cout<<maxsum<<endl;

    return 0;
}