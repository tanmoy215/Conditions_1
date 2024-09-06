#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Condition matched";
        }
        else{
            cout<<"condition not matched";
        }
    }
    else{
        cout<<"condition not matched";
    }
    return 0;
}