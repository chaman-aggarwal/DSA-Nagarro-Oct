#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int col=0; col<m; col++)
    {
        if(col%2==0)
        {
            // even column Top down
            for(int row=0; row<n; row++)
            {
                cout<<matrix[row][col]<<" ";
            }
        }
        else
        {
            // odd column Bottom Up
            for(int row=n-1; row>=0; row--)
            {
                cout<<matrix[row][col]<<" ";
            }
        }
    }

    return 0;
}