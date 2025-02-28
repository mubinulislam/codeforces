#include <iostream>
#include <vector>

using namespace std;

int main(){
    string a;
    string b;
    string c;


    cin>>a;
    cin>>b;

    for(int i=0;i<a.length();i++){
        if (a[i]==b[i]){
            c+='0';
        }
        else{
            c+='1';
        }
    }
    cout << c;
}