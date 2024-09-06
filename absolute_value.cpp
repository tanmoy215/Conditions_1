#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ; ";
    cin>>n;
    // if(n>0){
    //     cout<<"Absolute Value : "<<n;
    // }
    // else{
    //     cout<<"Absolute Value : "<<-n;
    // }
    if(n<0){
        n=-n;
    }
    cout<<"Absolute Value : "<<n;
    return 0;
}