#include<iostream>

using namespace std;

int main(){
    string s;
    int count1=0;
    int count=0;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count1+=1;
            if(count1>=6){
                count=count1;
                continue;
            }
        }
        else{
            count1=0;
        }
    }
    if(count>=6){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}