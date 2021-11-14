#include<iostream>
#include<vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> matrix, int n, int m)
{
    int row=-1;
    int j=m-1;
    for(int i=0; i<n; i++)
    {
        while(matrix[i][j]==1)
        {
            j--;
            row = i;
        }
    }
    return row;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<rowWithMax1s(matrix, n, m);

    return 0;
}