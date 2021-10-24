#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    if(num > 0)
    {
        cout<<"Positive";
    }
    else if(num == 0)
    {
        cout<<"Zero";
    }
    else
    {
        cout<<"Negative";
    }

    return 0;
}