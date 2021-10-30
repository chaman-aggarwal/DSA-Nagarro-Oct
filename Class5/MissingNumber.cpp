#include<iostream>
using namespace std;
// #include<bits/stdc++.h>

int missingNumber(int arr[], int n)
{
    int totalSum = n*(n+1)/2;
    int arraySum = 0;

    for(int i=0; i<n; i++)
    {
        arraySum += arr[i];    
    }

    return totalSum - arraySum;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<missingNumber(arr, n);

    return 0;
}