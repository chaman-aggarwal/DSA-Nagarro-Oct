#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int n1 = 0;
    int n2 = 1;
    cout<<n1<<" "<<n2<<" ";
    int n3;

    for(int i=2; i<n; i++)
    {
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }

    return 0;
}