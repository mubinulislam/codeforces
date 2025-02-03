#include<iostream>
 
using namespace std;
 
int main(){
    int X=0;
    int number;
    string statement;
    cin>>number;
    for (int i=0;i<number;i++){
        cin>>statement;
        if (statement=="X++"||statement=="++X"){
            X+=1;
        }
        else {
            X-=1;
        }
    }
    cout<<X;
}