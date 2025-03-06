#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int capital=0;
    int small=0;

    for(int i=0;i<s.length();i++){
        if ((int)s[i]>=97){
            small+=1;
        }
        else{
            capital+=1;
        }
            
    }
    if (capital > small){
        for (char &c:s){
            c=toupper(c);
            cout << c;
        }
    }
    else{
        for (char &c:s){
            c=tolower(c);
            cout << c;
        }
    }
}