#include <iostream>
using namespace std;

void butterflypattern(int n)
{
    //Top
    for(int i=0; i<n; i++)
    {
        //top left
        for(int j=0; j<=i; j++)
        {
            cout<<"*"<<" ";
        }

        // top spaces
        for(int j=0; j<2*(n-i)-2;j++)
        {
            cout<<" "<<" ";
        }

        //top right
        for(int j=0; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //bottom
    for(int i=0; i<n; i++)
    {
        //bottom left
        for(int j=0; j<n-i; j++)
        {
            cout<<"*"<<" ";
        }

        //bottom spaces
        for(int j=0; j<2*i;j++)
        {
            cout<<" "<<" ";
        }

        //bottom right
        for(int j=0; j<n-i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;


//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the value for butterfly pattern : ";
//     cin>>n;

//     butterflypattern(n);

//     return 0;

// }

// #include <iostream>
// using namespace std;

// void butterflypattern(int n)
// {
//     //Top
//     for(int i=0; i<n; i++)
//     {
//         //top left
//         for(int j=0; j<=i; j++)
//         {
//             cout<<"*";
//         }

//         // top spaces
//         for(int j=0; j<2*(n-i)-2;j++)
//         {
//             cout<<" ";
//         }

//         //top right
//         for(int j=0; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     //bottom
//     for(int i=0; i<n; i++)
//     {
//         //bottom left
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"*";
//         }

//         //bottom spaces
//         for(int j=0; j<2*i;j++)
//         {
//             cout<<" ";
//         }

//         //bottom right
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;


//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the value for butterfly pattern : ";
//     cin>>n;

//     butterflypattern(n);

//     return 0;

// }

