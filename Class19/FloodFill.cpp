https://leetcode.com/problems/flood-fill/

class Solution {     
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int original)
    {
        int n = image.size();
        int m = image[0].size();
        
        if(sr<0 || sr>=n || sc<0 || sc>=m || image[sr][sc]!=original)
        {
            return;
        }
        
        image[sr][sc] = newColor;
        
        dfs(image, sr-1, sc, newColor, original);
        dfs(image, sr+1, sc, newColor, original);
        dfs(image, sr, sc-1, newColor, original);
        dfs(image, sr, sc+1, newColor, original);
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        if(newColor == image[sr][sc])
        {
            return image;
        }
        int original = image[sr][sc];
        
        dfs(image, sr, sc, newColor, original);
        return image;
    }
};