#include<iostream>
using namespace std;

int main(){

    // int num = 8;
    // bool checkEven = num%2==0 ? true : false;
    // cout<<checkEven;

    // int marks;
    // cin>>marks;
    // string result = (marks >= 50) ? "pass" : "fail";
    // cout<<result;

    int num;
    cin>>num;

    string res;

    res = (num==0) ? "zero" : ((num>0) ? "positive" : "negative");

    cout<<res;

    return 0;
}