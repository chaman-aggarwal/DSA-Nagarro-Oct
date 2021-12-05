#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    return n&1;
}

int getBit(int n, int i)
{
    int mask = 1<<i;
    int bit = (n&mask) > 0 ? 1 : 0;
    return bit;
}

int setBit(int n, int i)
{
    int mask = 1<<i;
    int bit = n|mask;
    return bit;
}

int clearBit(int n, int i)
{
    int mask = ~(1<<i);
    int bit = n&mask;
    return bit;
}

int main(){

    int n;
    cin>>n;
    // cout<<isOdd(n)<<endl;
    int i;
    cin>>i;
    // cout<<getBit(n, i)<<endl;
    // cout<<setBit(n, i)<<endl;
    cout<<clearBit(n, i)<<endl;
    return 0;
}