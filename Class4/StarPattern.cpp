#include<iostream>
using namespace std;

void patternPrint(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl; // changing the row
    }
}

int main(){

    patternPrint(5);
    return 0;
}