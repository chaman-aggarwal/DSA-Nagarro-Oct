#include<iostream>
using namespace std;

int main(){


    int f;
    cin>>f;
    int c;

    while(f<=200)
    {
        c = (5*(f-32)) / 9;
        cout<<f<<" "<<c<<endl;
        f = f+20;
    }

    return 0;
}