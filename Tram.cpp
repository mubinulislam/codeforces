#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,a,b;
    int capacity=0;
    cin >> n;
    vector<int>x(n);
    while(n){
        cin >> a >> b;
        capacity=capacity-a+b;
        x.push_back(capacity);
        n--;
    }
    auto max=max_element(x.begin(),x.end());
    cout<<*max;
}