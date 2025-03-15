#include <iostream>
//#include<vector>
using namespace std;

int main(){
    int n,h;
    int width=0;
    int height;
    //vector<int>height(n);
    cin >> n >> h;

    for(int i=0;i<n;i++){
        cin >> height;
        if(height<=h){
            width+=1;
        }
        else{
            width+=2;  
        }
    }
    
    cout << width;
}