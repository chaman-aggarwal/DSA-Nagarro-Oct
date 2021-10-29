#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return false; // not prime
        }
    }
    return true; // prime
}

int main(){

    if(checkPrime(19)){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime"<<endl;
    }

    if(checkPrime(9)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime";
    }

    return 0;
}