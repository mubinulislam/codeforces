#include<iostream>

using namespace std;

int main(){
    long long x;
    int moves;

    cin >> x;
    if (x%5==0){
        moves=x/5;
    }
    else{
        moves=x/5+1;
    }

    cout << moves; 
}