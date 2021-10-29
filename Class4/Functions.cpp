#include<iostream>
using namespace std;

// void printHello()
// {
//     cout<<"Hello"<<endl;
// }

int factorial(int num)
{
    int fact = 1;
    for(int i=1; i<=num; i++)
    {
        // fact = fact * i;
        fact *= i;
    }
    return fact;
}

int main(){
    // cout<<"Before function"<<endl;
    // printHello();
    // cout<<"After function";
    cout<<factorial(6)<<endl;
    cout<<factorial(5)<<endl;
    cout<<factorial(3)<<endl;
    cout<<factorial(7);

    return 0;
}