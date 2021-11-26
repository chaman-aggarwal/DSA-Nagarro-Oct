https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())
        {
            return false;
        }
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;
        
        vector<int> map(26, 0);
        
        for(char i:s)
        {
            map[i-'a']++;
        }
        
        for(char i:t)
        {
            map[i-'a']--;
        }
        
        for(int i=0; i<26; i++)
        {
            if(map[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};