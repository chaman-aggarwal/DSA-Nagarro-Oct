https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ones = 0;
        int twos = 0;
        
        for(int i:nums)
        {
            ones = (ones^i) & (~twos);
            twos = (twos^i) & (~ones);
        }
        return ones;
    }
};