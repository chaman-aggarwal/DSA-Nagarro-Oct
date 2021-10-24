#include<iostream>
using namespace std;

int main(){

    // char ch;
    // cin>>ch;

    // switch(ch){
    //     case 'B':
    //         cout<<"Burger"<<endl;
    //         break;
    //     case 'M':
    //         cout<<"Maggi"<<endl;
    //         break;
    //     case 'P':
    //         cout<<"Pizza"<<endl;
    //         break;
    //     case 'C':
    //         cout<<"Coke"<<endl;
    //         break;
    //     default : 
    //         cout<<"Item is not present";
    // }

    int day;
    cin>>day;

    switch(day)
    {
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Looking forward to the weekend";
    }

    return 0;
}