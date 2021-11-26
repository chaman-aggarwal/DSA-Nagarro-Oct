#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //1. Input/Output
    // string firstName;
    // cin>>firstName;
    // cout<<firstName<<endl;

    // string fullName;
    // getline(cin, fullName);
    // cout<<fullName;

    // 2. Append
    string a = "Python";
    string b = "Hello";
    // a.append(b);
    // cout<<a<<endl;
    // cout<<a+b<<endl;

    //3. Compare
    // cout<<a.compare(b)<<endl;

    //4. Access and update
    // cout<<a[2]<<endl;
    // a[0] = 'J';
    // cout<<a<<endl;

    //5. clear
    cout<<a<<endl;
    // a.clear();
    // cout<<a<<endl;

    //6. Empty
    if(a.empty())
    {
        cout<<"String is empty"<<endl;
    }

    //7. size / length
    cout<<a.size()<<endl;
    cout<<a.length()<<endl;

    //8. find
    cout<<a.find("llo")<<endl;

    //9. insert
    a.insert(3, "apple");
    cout<<a<<endl;

    //10. delete
    a.erase(3, 5);
    cout<<a<<endl;

    //11. substr
    cout<<a.substr(1, 2)<<endl;

    //12. sort
    sort(a.begin(), a.end());
    cout<<a<<endl;

    //13. reverse
    reverse(a.begin(), a.end());
    cout<<a<<endl;

    //14. convert
    int x = 10;
    cout<<to_string(x)+"4"<<endl;

    string y = "234";
    cout<<stoi(y)<<endl;

    //15. iterate
    string p = "Hello";
    for(char c:p)
    {
        cout<<c<<", ";
    }
    cout<<endl;
    for(int i=0; i<p.size(); i++)
    {
        cout<<p[i]<<"! ";
    }
    return 0;
}