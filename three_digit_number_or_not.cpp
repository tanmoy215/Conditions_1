#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<n<<" : It is three Digit Number ";
    }
    else{
        cout<<n<<" : Not a three Digit Number ";
    }
    return 0;
}