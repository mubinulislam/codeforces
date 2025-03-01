#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int move[t];
    long long a,b,remainder[t];
    for(int i=0;i<t;i++){
        cin >> a >> b;
        remainder[i] = a%b;
        if (remainder[i]==0){
            move[i]=0;
        }
        else{
            move[i]=b-remainder[i];
        }
    }
    for (int i:move){
        cout << i <<endl;
    }
}   