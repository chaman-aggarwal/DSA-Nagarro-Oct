#include<iostream>
using namespace std;

string isPalindrome(string str)
{
    int n = str.size();
    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-i-1])
        {
            return "NO";
        }
    }
    return "YES";
}

int main(){
    string str;
    cin>>str;
    cout<<isPalindrome(str);
    return 0;
}