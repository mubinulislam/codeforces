#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    int pos=0;
    
    cin >> t;
    vector<long long>n(t);
    vector<long long>m;

    for (int i=0;i<t;i++){
        cin >> n[i];
    }
    while(t--){
        int count=0;
        for(int i=0;i<n[pos];i++){
            int count=(i/15)*3;
            int remainder = i%15;

            if (remainder >=0) count++;
            if (remainder >=6) count++;
            if (remainder >=12) count++;
        }
        m.push_back(count);
        pos++;
    }
    for (int num : m) {
        cout << num << endl;
    }
}