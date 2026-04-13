#include<iostream>
using namespace std;

int main()
{
    int sal = 1500;
    int arr[] = {200, 600, 350, -152, 200, 450, -300};
    int ar[2] = {0};
    ar[0] = sal;
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len; i++)
    {
        sal = sal+(arr[i]);
        if(ar[0] < sal)
        {
            ar[0] = sal;
        }

        if(i == len-1)
        {
            ar[1] = sal;
        }
    }

    for(int i=0; i<2; i++)
    {
        cout<<ar[i]<<", ";
    }

    return 0;
}