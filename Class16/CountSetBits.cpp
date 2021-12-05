#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int ans = 0;
    while(n>0)
    {
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}

int countSetBitsOptimised(int n)
{
    int ans = 0;
    while(n>0)
    {
        n = n & (n-1);
        ans++;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    // cout<<countSetBits(n)<<endl;
    cout<<countSetBitsOptimised(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;
    return 0;
}