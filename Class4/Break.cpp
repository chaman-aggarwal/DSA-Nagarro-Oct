#include<iostream>
using namespace std;

int main(){

    // for(int i=1; i<=10; i++)
    // {
    //     if(i==7)
    //     {
    //         break; // it will go to line no 13
    //     }
    //     cout<<i<<endl;
    // }
    int no;

    while(true)
    {
        cin>>no;
        if(no%5==0)
        {
            break;
        }
        cout<<"Not multiple of 5"<<endl;
    }

    cout<<"Out of the loop";

    return 0;
}