#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    // base case
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0] <= arr[1] && isSorted(arr+1, n-1))
    {
        return true;
    }
    return false;
}

int main(){
    int arr[] = {12,4,6,7,9};
    int n = 5;
    if(isSorted(arr, n)){
        cout<<"Sorted Array";
    }
    else{
        cout<<"Not sorted";
    }
    return 0;
}