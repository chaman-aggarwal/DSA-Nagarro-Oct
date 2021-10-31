#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n)
{
    int totalSum = 0;
    for(int i=0; i<n; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;

    for(int i=0; i<n; i++)
    {
        rightSum -= arr[i];
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<pivotIndex(arr, n);

    return 0;
}