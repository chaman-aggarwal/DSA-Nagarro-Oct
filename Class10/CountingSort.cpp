#include<iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    int maxVal = -1;
    for(int i=0; i<n; i++)
    {
        maxVal = max(arr[i], maxVal);
    }

    int freq[maxVal+1] = {0};

    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    // put element back in original array
    int j=0;
    for(int i=0; i<=maxVal; i++)
    {
        while(freq[i]>0)
        {
            arr[j]=i;
            j++;
            freq[i]--;
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
    countingSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}