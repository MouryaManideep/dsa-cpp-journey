#include<iostream>
using namespace std;
// #include<bits/stdc++.h>

int main(){
    int arr[] = {1, 2, 3, 4, 2, 3, 1};
    int size = 7;
    int unique;

    for(int i=0; i<size; i++)
    {
        int count = 0;
        for(int j=0; j<size; j++)
        {
            if((arr[i]==arr[j])&&(i!=j))
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if(count==0)
        {
            unique = arr[i];
        }
    }

    cout<<"unique = "<<unique<<endl;

    return 0;
}