#include<iostream>
using namespace std;

int main(){

    // 4, 5, 1, 5, 3, 1, 4
    int n;
    cin>>n;
    int no;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>no;
        ans ^= no;
    }
    cout<<ans;

    return 0;
}