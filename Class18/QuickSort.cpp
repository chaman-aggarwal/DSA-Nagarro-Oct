#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int j = s;
    int i = s-1;
    int pivot = arr[e];
    for(j=s; j<e; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quickSort(int arr[], int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}