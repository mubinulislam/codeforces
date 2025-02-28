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
    while(pos<t){
        int count=0;
        for(int j=0;j<n[pos]+1;j++){
            if (j%3==j%5){
                count+=1;
            }
            else{
                continue;
            }
        }
        m.push_back(count);
        pos++;
    }
    for (int num : m) {
        cout << num << endl;
    }
}