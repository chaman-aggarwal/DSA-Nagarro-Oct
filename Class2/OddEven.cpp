#include<iostream>
using namespace std;

int main(){

    int num = 11;
    // condition
    if(num%2==0)
    {
        cout<<"Entering if block"<<endl;
        cout<<"Even number";
    }
    else
    {
        cout<<"Entering else block"<<endl;
        cout<<"Odd number";
    }

    return 0;
}