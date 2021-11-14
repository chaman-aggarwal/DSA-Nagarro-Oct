https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size(); // rows
        int m = matrix[0].size(); // columns
        
        int sr = 0;
        int sc = 0;
        int er = n-1;
        int ec = m-1;
        
        vector<int> res;
        
        while(sr<=er && sc<=ec)
        {
            for(int i=sc; i<=ec; i++)
            {
                res.push_back(matrix[sr][i]);
            }
            sr++;
            
            for(int i=sr; i<=er; i++)
            {
                res.push_back(matrix[i][ec]);
            }
            ec--;
            
            if(sr<=er)
            {
                for(int i=ec; i>=sc; i--)
                {
                    res.push_back(matrix[er][i]);
                }
            }
            er--;
            
            if(sc<=ec)
            {
                for(int i=er; i>=sr; i--)
                {
                    res.push_back(matrix[i][sc]);
                }
            }
            sc++;
            
        }
        return res;
    }
};