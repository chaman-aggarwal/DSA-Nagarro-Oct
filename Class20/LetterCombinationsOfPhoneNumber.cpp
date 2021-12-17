class Solution { 
    
    void phone(string digits, vector<string>& res, string mappings[], string curr, int index)
    {
        if(index==digits.size())
        {
            res.push_back(curr);
            return;
        }
        
        string val = mappings[digits[index]-'0']; //a  b  c
        
        for(int i=0; i<val.size(); i++)
        {
            phone(digits, res, mappings, curr+val[i], index+1);
        }
        
    }
    
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        if(digits.size()==0)
        {
            return res;
        }
        
        string mappings[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        phone(digits, res, mappings, "", 0);
        return res;
    }
};