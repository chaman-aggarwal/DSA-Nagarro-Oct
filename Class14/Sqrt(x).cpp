https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        
        int s = 0;
        int e = x;
        int res = 0;
        
        while(s<=e)
        {
            long long int mid = (s+e)/2;
            if(mid*mid == x)
            {
                return mid;
            }
            else if(mid*mid < x)
            {
                res = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
        return res;
    }
};