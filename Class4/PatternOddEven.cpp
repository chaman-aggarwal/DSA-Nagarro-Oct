#include<iostream>
using namespace std;

void patternOddEven(int n)
{
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        // odd row
        if(row%2!=0)
        {
            while(col<=row)
            {
                cout<<1<<" ";
                col++;
            }
        }
        // even row
        else
        {
            cout<<1<<" ";
            while(col<=row-2)
            {
                cout<<0<<" ";
                col++;
            }
            cout<<1<<" ";
        }
        cout<<endl;
        row++;
    }
}

int main(){

    patternOddEven(6);
    return 0;
}