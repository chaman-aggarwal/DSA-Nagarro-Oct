#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // base case
    if(n==0 || n==1)
    {
        return n;
    }
    // recursive case
    int f1 = fib(n-1);
    int f2 = fib(n-2); 
    return f1+f2;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}