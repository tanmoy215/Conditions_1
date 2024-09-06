#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<n<<" : It is divisible by 3 or 5";
    }
    else{
        cout<<n<<" : It is not divisible by 3 or 5";
    }
    return 0;
}