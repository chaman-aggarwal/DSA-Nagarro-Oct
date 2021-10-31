#include<iostream>
using namespace std;

void generateSubarrays(int arr[], int n)
{
    // starting point 
    for(int i=0; i<n; i++)
    {
        // ending point
        for(int j=i; j<n; j++)
        {
            // printing subarrays
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    generateSubarrays(arr, n);

    return 0;
}