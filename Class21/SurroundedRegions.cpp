https://leetcode.com/problems/surrounded-regions/

class Solution {  
    
    void marking(vector<vector<char>>& board, int i, int j, int row, int col)
    {
        if(i<0 || j<0 || i>=row || j>=col || board[i][j]!='O')
        {
            return;
        }
        board[i][j] = '$';
        marking(board, i+1, j, row, col);
        marking(board, i-1, j, row, col);
        marking(board, i, j+1, row, col);
        marking(board, i, j-1, row, col);
    }
    
public:
    void solve(vector<vector<char>>& board) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j]=='O' && (i==0 || j==0 || i==row-1 || j==col-1))
                {
                    marking(board, i, j, row, col);
                }
            }
        }
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j]=='$')
                {
                    board[i][j] = 'O';
                }
                else if(board[i][j]=='O')
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};