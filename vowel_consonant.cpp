#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character : ";
    cin>>ch;
    if(ch=='A' || ch=='a'){
        cout<<"Vowwel";
    }
    else if(ch=='E' || ch=='e'){
        cout<<"Vowel";
    }
    else if(ch=='I' || ch=='i'){
        cout<<"Vowel";
    }
    else if(ch=='O' || ch=='o'){
        cout<<"Vowel";
    }
    else if(ch=='u' || ch=='U'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}