#include<iostream>
#include<algorithm>
using namespace std;

int triplet(int arr[], int n, int sum)
{
    sort(arr, arr+n);
    for(int k=0; k<n-2; k++)
    {
        int i=k+1;
        int j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]+arr[k]==sum)
            {
               return 1;
            }
            else if(arr[i]+arr[j]+arr[k]<sum)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    return 0;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    if(triplet(arr, n, sum))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}