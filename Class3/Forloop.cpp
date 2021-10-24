#include<iostream>
using namespace std;

int main(){

    // int n = 7;

    // for(int i=0; i<n; i++)
    // {
    //     cout<<"Hello!"<<endl;
    // }

    // for(int i=1; i<=10; i++)
    // {
    //     cout<<i<<endl;
    // }

    // for(int i=10; i>=1; i--)
    // {
    //     cout<<i<<endl;
    // }

    // for(int i=0; i<=20; i+=2)
    // {
    //      cout<<i<<endl;
    // }

    int sum = 0;
    for(int i=1; i<=10; i++)
    {
        sum += i;
    }
    cout<<sum;

    return 0;
}