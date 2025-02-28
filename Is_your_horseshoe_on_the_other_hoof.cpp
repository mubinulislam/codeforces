#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int count=0;
    int s[4];

    for (int i=0;i<4;i++){
        cin >> s[i];
    }
    sort(s,s+4); //used sorting algorithm. syntax: "sort(array,array+size)"

    for(int i=0;i<3;i++){
        if (s[i]==s[i+1]){
            count+=1;
        }
    }
    cout << count << endl;
}