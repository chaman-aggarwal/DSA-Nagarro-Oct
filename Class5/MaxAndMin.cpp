#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
        // maxVal = max(arr[i], maxVal);
        if(arr[i] < minVal)
        {
            minVal = arr[i];
        }
        // minVal = min(arr[i], minVal);
    }

    cout<<"Minimum value is "<<minVal<<endl;
    cout<<"Maximum value is "<<maxVal<<endl;
    return 0;
}