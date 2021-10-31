#include<iostream>
using namespace std;

int maximumSumSubarray(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<maximumSumSubarray(arr, n);

    return 0;
}