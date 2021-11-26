https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        
        int x = 0;
        int y = 0;
        
        for(char i:moves)
        {
            if(i=='L')
            {
                x--;
            }
            else if(i=='R')
            {
                x++;
            }
            else if(i=='U')
            {
                y++;
            }
            else
            {
                y--;
            }
        }
        return x==0 && y==0;
    }
};