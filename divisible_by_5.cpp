#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%5==0){
        cout<<"Number is Divisible By 5";
    }
    else{
        cout<<"Number is not Divisible By 5";
    }
    return 0;
}