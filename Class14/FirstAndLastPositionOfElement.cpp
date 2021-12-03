https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int first = -1, last = -1;
        
        // first occurence
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid]==target)
            {
                first = mid;
                e = mid-1;
            }
            else if(nums[mid] > target)
            {            
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        
        s = 0;
        e = n-1;
        // last occurence
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid]==target)
            {
                last = mid;
                s = mid+1;
            }
            else if(nums[mid] > target)
            {            
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return {first, last};
    }
};