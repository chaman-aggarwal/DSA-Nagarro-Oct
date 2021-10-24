#include<iostream>
using namespace std;

int main(){

    int a = 4;
    // a = a + 5;
    a += 5;
    a -= 5;

    a++; // increment 1
    a--; // decrement 1

    int x = 3;
    int y = 3;
    cout<<(x>y)<<endl;
    cout<<(x<y)<<endl;

    // = assignment
    // == comparsion

    cout<<(x==y)<<endl;
    cout<<(x!=y)<<endl;

    int p = 2; // greater than 5
    int q = 4; // less than 10

    cout<<(p > 5 && q < 10)<<endl;

    cout<<(p > 5 || q < 10)<<endl;

    cout<<max(50, 100)<<endl;
    cout<<min(50, 100)<<endl;

    cout<<max(50, max(100, 80));

    return 0;
}