https://leetcode.com/problems/sudoku-solver/

class Solution { 
    
    bool isValidBoard(vector<vector<char>>& board, int i, int j, char c)
    {
        // row-column
        for(int k=0; k<9; k++)
        {
            if(board[i][k]==c || board[k][j]==c)
            {
                return false;
            }
        }
        
        int sr = (i/3)*3;
        int sc = (j/3)*3;
        
        // sub-board
        for(int a=sr; a<sr+3; a++)
        {
            for(int b=sc; b<sc+3; b++)
            {
                if(board[a][b]==c)
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
    
    bool fillSudoku(vector<vector<char>>& board)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1'; c<='9'; c++)
                    {
                        if(isValidBoard(board, i, j, c))
                        {
                            board[i][j] = c;
                            
                            if(fillSudoku(board))
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        fillSudoku(board);
    }
};