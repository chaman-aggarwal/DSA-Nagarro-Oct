#include<bits/stdc++.h>
using namespace std;

char maze[1001][1001]={0};
int sol[1001][1001]={0};

bool ratInMaze(int i, int j, int m, int n)
{
    // base case
    if(i==m-1 && j==n-1)
    {
        sol[i][j] = 1;
        //print path
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    // rat should be inside
    if(i>=m || j>=n || maze[i][j]=='X')
    {
        return false;
    }
    sol[i][j] = 1;

    // recursive
    bool rightSuccess = ratInMaze(i,j+1,m,n);
    bool downSuccess = ratInMaze(i+1,j,m,n);

    sol[i][j] = 0;

    if(rightSuccess || downSuccess)
    {
        return true;
    }
    return false;
}

int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>maze[i][j];
        }
    }
    bool res = ratInMaze(0, 0, m, n);
    if(!res)
    {
        cout<<-1<<endl;
    }
    return 0;
}