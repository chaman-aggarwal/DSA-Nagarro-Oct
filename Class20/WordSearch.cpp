class Solution {
    
    bool check(vector<vector<char>>& board, string word, int index, int n, int m, int i, int j)
    {
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[index])
        {
            return false;
        }
        
        if(index == word.size()-1)
        {
            return true;
        }
        
        bool found = false;
        char temp = board[i][j];
        board[i][j] = '$';
        
        found = check(board, word, index+1, n, m, i-1, j) ||
                check(board, word, index+1, n, m, i+1, j) ||
                check(board, word, index+1, n, m, i, j-1) || 
                check(board, word, index+1, n, m, i, j+1);
        
        board[i][j] = temp;
        return found;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==word[0] && check(board, word, 0, n, m, i, j))
                {
                    return true;
                }
            }
        }
        return false;
    }
};