#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

int main(){
    string str1;
    string str2;
    int output;
    cin >> str1;
    transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c) { return tolower(c); });
    cin >> str2;
    transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c) { return tolower(c); });
    //cout << str1 << str2;

    for (int i=0;i<str1.length();i++){
        if (str1[i]==str2[i]){
            output=0;
            continue;
        }
        else if (str1[i]<str2[i]){
            output=-1;
            break;
        }
        else{
            output=1;
            break;
        }
    }
    cout << output;
}