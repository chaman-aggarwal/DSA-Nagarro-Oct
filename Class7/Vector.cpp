#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> a(n);
    vector<int> b(5, 10);
    vector<int> c{1,3,4,2,6};

    // iterate over vector
    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i]<<", ";
    }
    cout<<endl;

    // input elements
    for(int i=0; i<n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }

    // for each loop
    for(int i:v)
    {
        cout<<i<<", ";
    }

    return 0;
}