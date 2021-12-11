#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int temp[100];
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
}

void mergeSort(int arr[], int s, int e)
{
    if(s>=e)
    {
        return;
    }
    // 1. divide
    int mid = (s+e)/2;
    // 2. recursively sort
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    // 3. merge
    merge(arr, s, e);
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}