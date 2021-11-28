https://leetcode.com/problems/multiply-strings/

class Solution {
public:
    string multiply(string num1, string num2) {
        
        if(num1=="0" || num2=="0")
        {
            return "0";
        }
        
        int n = num1.size();
        int m = num2.size();
        vector<int> res(n+m, 0);
        
        for(int i=n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                res[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                res[i+j] += res[i+j+1]/10; //adding carry
                res[i+j+1] %=10;
            }
        }
        
        int skip=0;
        while(skip<res.size() && res[skip]==0)
        {
            skip++;
        }
        
        string ans="";
        while(skip<res.size())
        {
            ans += to_string(res[skip]);
            skip++;
        }
        return ans;
    }
};