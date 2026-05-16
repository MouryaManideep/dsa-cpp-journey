#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n=7;
    // int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    // vector<int> arr = {-3, 8, -2, 4, -5, 6};
    // vector<int> arr = {5,4,-1,7,8};
    vector<int> arr = {-1, -2, 3, 4, -5};
    int cs=arr[0], maxsum=arr[0];

    for(int i=1; i<arr.size(); i++)
    {
        cs = max(arr[i], cs + arr[i]);
        maxsum = max(cs, maxsum);
    }

    cout<<maxsum<<endl;

    return 0;
}