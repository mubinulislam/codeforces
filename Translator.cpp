#include<iostream>

using namespace std;

int main(){
    string ber,bir;
    string check="";
    cin>>ber;
    cin>>bir;
    int n=ber.length();

    for(int i=n-1;i>=0;i--){
        check+=ber[i];
    }
    if (bir==check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}