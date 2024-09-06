#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<n<<" : Divisible By 3 and 5";
    }
    else{
        cout<<n<<" : not Divisible By 3 and 5";
    }
    return 0;
}