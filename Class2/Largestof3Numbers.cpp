#include<iostream>
using namespace std;

int main(){

    int a=20, b=20, c=10;

    if(a>=b && a>=c)
    {
        cout<<"a :"<<a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"b :"<<b;
    }
    else
    {
        cout<<"c :"<<c;
    }

    return 0;
}