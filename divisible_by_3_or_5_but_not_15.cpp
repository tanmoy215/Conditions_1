#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"Condition matching";
        }
        else{                               //using nested if - else
            cout<<"condition not matching";
        }
    }
    else{
        cout<<"condition not matching";
    }
    return 0;
}
