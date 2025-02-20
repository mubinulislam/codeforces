#include<iostream>

using namespace std;
int main(){
    int n;
    int sum;
    cin >> n;
    if (n%2==0){
        sum=n/2;
    }
    else if ((n+1)%2==0){
        sum=-(n+1)/2;
    }
    cout << sum;
}