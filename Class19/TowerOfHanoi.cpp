#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char src, char helper, char dest)
{
    // base case
    if(n==0)
    {
        return;
    }
    // recursive case
    TOH(n-1, src, dest, helper);
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    TOH(n-1, helper, src, dest);
}

int main(){
    int n;
    cin>>n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}