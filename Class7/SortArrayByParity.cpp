https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
    
        int n = A.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(A[i]%2!=0)
            {
                swap(A[i], A[j]);
                j--;
            }
            else
            {
                i++;
            }
        }
        return A;
    }
};