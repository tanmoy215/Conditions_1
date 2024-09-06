#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Cost of a Product : ";
    cin>>cp;
    cout<<"Selling Price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit : "<<sp-cp<<" Rs.";
    }
    if(sp==cp){
        cout<<"No Profit No Loss";
    }
   if(sp<cp){
        cout<<"Loss : "<<cp-sp<<" Rs.";
    }
    return 0;
}