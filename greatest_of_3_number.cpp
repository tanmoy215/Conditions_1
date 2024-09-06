#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" a: is Greatest number of three";
    }
    if(b>a && b>c){
         cout<<b<<" b: is Greatest number of three";
    }
    else{
        cout<<c<<" c: is Greatest number of three";
    }
    return 0;
}