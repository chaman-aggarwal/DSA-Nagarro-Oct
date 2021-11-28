https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
    
    void longestSubstring(int l, int r, string &s, int &maxLen, int &start)
    {
        int n = s.size();
        while(l>=0 && r<n && s[l]==s[r])
        {
            l--;
            r++;
        }
        int currLen = r-l-1;
        if(currLen > maxLen)
        {
            start = l+1;
            maxLen = currLen;
        }
    }
    
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        int maxLen = 1;
        int start = 0;
        
        for(int i=0; i<n; i++)
        {
            // odd length
            longestSubstring(i, i, s, maxLen, start);
            // even length
            longestSubstring(i, i+1, s, maxLen, start);
        }
        return s.substr(start, maxLen);
    }
};