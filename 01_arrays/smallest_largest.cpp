#include<iostream>
#include<climits>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int nums[] = {5, 15, 22, 1, -15, -24};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int small_ind = 0;
    int large_ind = 0;

    for(int i=0; i<6; i++){
        if(nums[i]<smallest){
            small_ind = i;
            smallest = nums[i];
        }
        else if(nums[i]>largest){
            large_ind = i;
            largest = nums[i];
        }
    }

    cout<<"smallest = "<<smallest<<" at index '"<<small_ind<<"' "<<endl;
    cout<<"largest = "<<largest<<" at index '"<<large_ind<<"' "<<endl;

    return 0;
}