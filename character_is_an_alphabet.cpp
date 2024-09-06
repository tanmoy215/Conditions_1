#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter x : ";
    cin>>ch;
    int x=(int)ch;
    // if(x>96 && x<123){
    //     cout<<x<<" : it is a LowerCase alphabet";
    // }
    // if(x>64 && x<91){
    //     cout<<x<<" : its a UpperCase Alphabet";
    // }
    // else {
    //     cout<<x<<" :it is not a abphabet";
    // }
    if(x>64 && x<91 || x>96 && x<123){
        cout<<"It is a Alphabet";
    }
    else{
        cout<<"It is Not a alphabet";
    }
    return 0;
}