#include<iostream>

using namespace std;

int main(){
    int anton=0;
    int danik=0;
    long n;
    string s;
    cin >> n;
    cin >> s;

    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            anton+=1;
        }
        else{
            danik+=1;
        }
    }
    if(anton>danik){
        cout<<"Anton";
    }
    else if(anton<danik){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}