#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=10; i++)
    {
        if(i%2==0)
        {
            continue; // start of the loop line no 6
        }
        cout<<i<<endl;
    }

    cout<<"Out of the loop";

    return 0;
}