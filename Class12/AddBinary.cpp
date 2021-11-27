https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        
        int i=0;
        int lenA = a.size();
        int lenB = b.size();
        int carry = 0;
        string res;
        
        while(i<lenA || i<lenB || carry!=0)
        {
            int x = 0;
            int y = 0;
            if(i<lenA && a[lenA-i-1]=='1')
            {
                x = 1;
            }
            if(i<lenB && b[lenB-i-1]=='1')
            {
                y = 1;
            }
            int sum = x+y+carry;
            res = to_string(sum%2) + res;
            carry = sum/2;
            i++;
        }
        return res;
        
    }
};