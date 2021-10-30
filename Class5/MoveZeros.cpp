#include<iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    int j=0; // index of non-zero element

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[j]);
            j++;
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

    moveZeros(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }

    return 0;
}