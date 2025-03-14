#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>numbers(4);
    long d;
    long output=0;

    for(int i=0;i<4;i++){
        cin>>numbers[i];
    }
    cin>>d;

    for(long i=1;i<d+1;i++){
        if(i%numbers[0]==0 || i%numbers[1]==0 || i%numbers[2]==0 || i%numbers[3]==0){
            output+=1;
        }
    }
    cout<<output;
}