#include<iostream>
#include<climits>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] < smallest){
            smallest = i;
        }
        if(arr[i] > largest){
            largest = i;
        }
    }

    swap(arr[smallest], arr[largest]);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}