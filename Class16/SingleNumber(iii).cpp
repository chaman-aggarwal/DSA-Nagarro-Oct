https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int res = 0;
        for(int i=0; i<n; i++)
        {
            res ^= nums[i];
        }
        
        int temp = res;
        int pos = 0;
        while((temp&1)!=1)
        {
            pos++;
            temp = temp>>1;
        }
        
        int mask = 1<<pos;
        int num1 = 0;
        int num2 = 0;
        
        for(int i=0; i<n; i++)
        {
            if((nums[i]&mask) > 0)
            {
                num1 ^= nums[i];
            }
        }
        
        num2 = res^num1;
        return {num1, num2};
    }
};