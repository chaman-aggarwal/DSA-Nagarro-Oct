https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int s = 0;
        int i = 0;
        int e = n-1;
        
        while(i<=e)
        {
            if(nums[i]==0)
            {
                swap(nums[i], nums[s]);
                s++;
                i++;
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else
            {
                swap(nums[e], nums[i]);
                e--;
            }
        }
        
    }
};