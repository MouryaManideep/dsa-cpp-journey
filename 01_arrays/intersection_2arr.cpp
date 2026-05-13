#include<iostream>
#include<vector>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 3, 1};
    vector<int> v;
    int size1 = 5;
    int size2 = 4;
    for(int i=0; i<size2; i++)
    {
        for(int j=0; j<size1; j++)
        {
            if(arr1[j] == arr2[i]){
                v.push_back(arr1[j]);
            }
        }
    }

    for(int c : v)
    {
        cout<<c<<" ";
    }
 
    return 0;
}