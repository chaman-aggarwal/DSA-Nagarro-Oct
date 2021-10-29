#include<iostream>
#include<math.h>
// #include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    bool isPrime = true;

    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime==true)
    {
        cout<<"Num is prime";
    }
    else
    {   
        cout<<"Num is not prime";
    }

    return 0;
}