#include<iostream>
using namespace std;

int main(){
    // int matrix[5][3] = {0};
    // for(int i=0; i<5; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

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

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<", ";
        }
        cout<<endl;
    }

    return 0;
}