#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int n = arr.size()-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int no;
        cin>>no;
        arr.push_back(no);
    }
    cout<<binarySearch(arr, target);
    return 0;
}