#include<iostream>
using namespace std;

// void addTwoNumbers(int num1, int num2)
// {
//     cout<<num1+num2<<endl;
// }

int addNumbers(int a, int b, int c)
{
    return a+b+c;
}

int main(){
    // int num1, num2;
    // cin>>num1>>num2;

    // addTwoNumbers(5, 11);
    
    cout<<addNumbers(6, 10, 13)<<endl;
    cout<<addNumbers(16, 10, 13);

    return 0;
}