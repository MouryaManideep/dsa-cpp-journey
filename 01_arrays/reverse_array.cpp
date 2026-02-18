#include<iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    for(int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[(n-1)-i] = temp;
    }
}

int main()
{
    int n;
    cout<<"No. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Type integer values with seperate spaces: ";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    
    reverse_array(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}