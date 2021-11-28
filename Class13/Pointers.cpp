#include<iostream>
using namespace std;

int main(){

    // int x = 5;
    // cout<<&x<<endl;

    // int y = 8.7;
    // cout<<&y<<endl;

    // int a = 10;
    // int *aptr = &a;
    // cout<<a<<endl;
    // cout<<aptr<<endl;
    // cout<<&a<<endl;

    // // reassign
    // int b = 20;
    // aptr = &b;
    // cout<<&b<<endl;
    // cout<<aptr<<endl;

    int x = 10;
    int *xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    cout<<*(&x)<<endl;
    cout<<*xptr<<endl;

    cout<<&(*xptr)<<endl;
    cout<<*(&xptr)<<endl;

    cout<<&xptr<<endl;

    return 0;
}