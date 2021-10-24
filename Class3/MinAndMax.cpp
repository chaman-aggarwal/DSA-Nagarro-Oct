#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no;
    int minSoFar = INT_MAX; // biggest int val
    int maxSoFar = INT_MIN; // smallest int val
    //4 6 -3 10 2 -6 1
    for(int i=0; i<n; i++)
    {
        cin>>no;
        if(no < minSoFar){
            minSoFar = no; // 4, -3, -6
        }
        if(no > maxSoFar){
            maxSoFar = no; // 4, 6, 10 
        }
    }

    cout<<"Minimum Value is : "<<minSoFar<<endl;
    cout<<"Maximum value is : "<<maxSoFar;    

    return 0;
}