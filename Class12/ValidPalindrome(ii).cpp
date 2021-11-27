https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
    
    // check whether substring is palindrome or not
    bool deleteString(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        
        int n = s.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return deleteString(s, i+1, j) || deleteString(s, i, j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};