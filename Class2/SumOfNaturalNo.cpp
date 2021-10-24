#include<iostream>
using namespace std;

int main(){

    int n; //5
    cin>>n;
    int i=1;
    int sum = 0;
    while(i<=n)
    {
        //sum = sum + i;  0 + 1 = 1 + 2 = 3 + 3 = 6 + 4 = 10 + 5 = 15
        sum += i;
        i++; // 6
    }
    cout<<sum;
    return 0;
}