#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t){
        vector<string>vertices(4);

        for (int i=0;i<4;i++){
            cin >> vertices[i];
        }
        if (vertices[0] == vertices[1] && vertices[1] == vertices[2] && vertices[2] == vertices[3]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}