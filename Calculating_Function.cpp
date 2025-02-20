#include<iostream>

using namespace std;
int main(){
    long long n; 
    // for this problem there input range is 10^15, 
    //neither (int) and (long) type variable can store such value, so use (long long)
    long long sum;
    cin >> n;
    if (n%2==0){
        sum=n/2;
    }
    else if ((n+1)%2==0){
        sum=-(n+1)/2;
    }
    cout << sum;
}