#include<iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<secondLargest(arr, n);

    return 0;
}