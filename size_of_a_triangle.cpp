#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st side : ";
    cin>>a;
    cout<<"enter 2nd side : ";
    cin>>b;
    cout<<"enter 3rd side : ";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<a<<","<<b<<","<<c<<" the sides of a triangle";
    }
    else{
        cout<<"("<<a<<","<<b<<","<<c<<")"<<" not a sides of a triangle";
    }
    return 0;
}