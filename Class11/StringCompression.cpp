#include<iostream>
using namespace std;

void compressString(string str)
{
    int n = str.size();
    for(int i=0; i<n; i++)
    {
        int count = 1;
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        count==1 ? cout<<str[i] : cout<<str[i]<<count;
    }
}

int main(){
    string str;
    cin>>str;
    compressString(str);
    return 0;
}