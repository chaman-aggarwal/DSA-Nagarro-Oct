#include<iostream>
using namespace std;

// int linearSearch(int arr[], int n, int key)
// {
//     // 6
//     // 4, 2, 16, 8
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

void linearSearch(int arr[], int n, int key)
{
    int index = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            index = i;
            break;
        }
    }
    cout<<index;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    linearSearch(arr, n, key);
    return 0;
}