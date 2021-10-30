#include<iostream>
using namespace std;

int main(){

    int arr[5] = {3, 1, 2, 6, 8};

    cout<<arr[1]<<endl; // 1
    cout<<arr[4]<<endl; // 8
    cout<<arr[2]<<endl; // 2

    //update the index
    arr[1] = 5;
    cout<<arr[1]<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }

    int arr[] = {5, 2, 3, 1, 8, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr)/sizeof(int);
    cout<<n;

    return 0;
}