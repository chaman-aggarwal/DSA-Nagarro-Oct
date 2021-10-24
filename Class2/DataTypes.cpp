#include<iostream>
using namespace std;

int main(){

    //data types
    int num = 5;
    char val = 'A';
    string a = "Hello";
    float b = 3.14;
    double c = 4.5612398;
    bool myBoolean = false;

    cout<<"Integer : "<<num<<endl;
    cout<<"Character : "<<val<<endl;
    cout<<"string : "<<a<<endl;
    cout<<"float : "<<b<<endl;
    cout<<"double : "<<c<<endl;
    cout<<"bool : "<<myBoolean<<endl;

    cout<<"Size of int : "<<sizeof(num)<<endl;
    cout<<"Size of character : "<<sizeof(val)<<endl;

    int minVal = INT_MIN;
    int maxVal = INT_MAX;

    cout<<minVal<<endl;
    cout<<maxVal;

    int x = 7;
    x = 10;
    cout<<x;

    // const int y = 9;
    // y = 11;
    // cout<<y;

    const float PI = 3.14;

    return 0;
}