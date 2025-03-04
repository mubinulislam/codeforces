#include<iostream>

using namespace std;

int main(){
    long long n,k,borrow,price=0;
    long w;

    cin >> k >> w >> n;

    for (int i=1; i<=n; i++){
        price+=k*i;
    }
    borrow=price-w;
    if (borrow<0){
        borrow=0;
        cout << borrow;
    }
    else{
        cout << borrow;
    }
}