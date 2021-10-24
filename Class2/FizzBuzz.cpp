#include<iostream>
using namespace std;

int main(){

    int n = 28;

    if(n%3==0 && n%4==0)
    {
        cout<<"FizzBuzz";
    }
    else if(n%3==0)
    {
        cout<<"Fizz";
    }
    else if(n%4==0)
    {
        cout<<"Buzz";
    }
    else
    {
        cout<<"Bye";
    }

    return 0;
}