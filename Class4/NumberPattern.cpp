#include<iostream>
using namespace std;

void numberPat(int n)
{
    int value = 1;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<value++<<" ";
            // value++;
        }
        cout<<endl; // changing the row
    }
}

int main(){

    numberPat(6);
    return 0;
}