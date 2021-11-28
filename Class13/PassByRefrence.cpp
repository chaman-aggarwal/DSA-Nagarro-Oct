#include<iostream>
using namespace std;

// void multiply(int x)
// {
//     x *=2;
//     cout<<"Inside function : "<<x<<endl;
// }

// void multiply(int *xptr)
// {
//     *xptr *= 2;
//     cout<<"Inside function : "<<*xptr<<endl;
// }

void multiply(int &x)
{
    x *=2;
    cout<<"Inside function : "<<x<<endl;
}

int main(){
    int x = 7;
    multiply(x);
    cout<<"Inside main : "<<x<<endl;
    return 0;
}