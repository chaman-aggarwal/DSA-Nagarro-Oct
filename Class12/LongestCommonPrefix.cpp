https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int n = strs.size();
        
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int length = min(first.size(), last.size());
        
        for(int i=0; i<length; i++)
        {
            if(first[i]==last[i])
            {
                ans += first[i];
            }
            else
            {
                break;
            }
        }
        
        return ans;
        
    }
};