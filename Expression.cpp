#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    vector<int>numbers(4);
    cin>>a;
    cin>>b;
    cin>>c;

    numbers.push_back(a+b*c);
    numbers.push_back(a*(b+c));
    numbers.push_back(a*b*c);
    numbers.push_back((a+b)*c);
    numbers.push_back(a+b+c);

    auto max= max_element(numbers.begin(),numbers.end());

    cout<<*max;
}