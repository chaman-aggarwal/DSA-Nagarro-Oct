https://leetcode.com/problems/palindrome-partitioning/

class Solution {   
    
    bool validPalindrome(string s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    void validPartitions(int index, string s, vector<vector<string>>& ans, vector<string>& curr)
    {
        // base case
        if(index == s.size())
        {
            ans.push_back(curr);
            return;
        }
        
        for(int i=index; i<s.size(); i++)
        {
            if(validPalindrome(s, index, i))
            {
                curr.push_back(s.substr(index, i-index+1));
                validPartitions(i+1, s, ans, curr);
                curr.pop_back();
            }
        }
        
    }
    
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> curr;
        validPartitions(0, s, ans, curr);
        return ans;
    }
};