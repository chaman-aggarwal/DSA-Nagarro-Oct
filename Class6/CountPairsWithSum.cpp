#include<iostream>
using namespace std;

// int countPairs(int arr[], int n, int sum)
// {
//     int count = 0;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]+arr[j]==sum)
//             {
//                 count++;
//             }
//         }
//     }
//     return count==0 ? -1 : count;
// }

int countPairs(int arr[], int n, int sum)
{
    int count = 0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==sum)
        {
            count++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count==0 ? -1 : count;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<countPairs(arr, n, sum);

    return 0;
}