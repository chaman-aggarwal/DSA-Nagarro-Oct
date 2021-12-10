#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int i, int n, int key)
{
    // base case
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return linearSearch(arr, i+1, n, key);
}

int main(){
    int arr[] = {2,4,5,1,3,7};
    int n = 6;
    int key = 13;
    cout<<linearSearch(arr, 0, n, key);
    return 0;
}