#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t){
        long long n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            a.push_back(a[i]+a[i+1]-1);
            a.erase(a.begin(),a.begin()+2);
            i--;
        }
        cout<<a[0]<<endl;
        t--;
    }
}