#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int temp[100];
    int count = 0;
    while(i<=mid && j<=e)
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
            // i++;
            // k++;
        }
        else
        {
            temp[k++] = arr[j++];
            count += mid-i+1;
        }
    }
    while(i<=mid)
    {
        temp[k++] = arr[i++];
    }
    while(j<=e)
    {
        temp[k++] = arr[j++];
    }
    for(int i=s; i<=e; i++)
    {
        arr[i] = temp[i];
    }
    return count;
}

int findInversion(int arr[], int s, int e)
{
    if(s>=e)
    {
        return 0;
    }
    // 1. divide
    int mid = (s+e)/2;
    // 2. recursively sort
    int x = findInversion(arr, s, mid);
    int y = findInversion(arr, mid+1, e);
    // 3. merge
    int z = merge(arr, s, e);
    return x+y+z;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<findInversion(arr, 0, n-1);
    return 0;
}