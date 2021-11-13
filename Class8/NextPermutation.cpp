https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)
        {
            return;
        }
        
        //1. find decreasing point
        int replaceIdx = -1;
        for(int i=n-1; i>=1; i--)
        {
            if(nums[i-1] < nums[i])
            {
                replaceIdx = i-1;
                break;
            }
        }
        
        //2. Swap
        if(replaceIdx==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        for(int i=n-1; i>replaceIdx; i--)
        {
            if(nums[i] > nums[replaceIdx])
            {
                swap(nums[replaceIdx], nums[i]);
                //3. sorting
                sort(nums.begin()+replaceIdx+1, nums.end());
                break;
            }
        }
    }
};