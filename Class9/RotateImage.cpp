https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { 
        
        int n = matrix.size(); 
        
        // transpose
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // reverse
        for(int i=0; i<n; i++)
        {
            // reverse(matrix[i].begin(), matrix[i].end());
            int s=0;
            int e=n-1;
            while(s<e)
            {
                swap(matrix[i][s], matrix[i][e]);
                s++;
                e--;
            }
        }
        
    }
};