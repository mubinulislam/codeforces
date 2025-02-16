#include<iostream>
#include <string>

using namespace std;

int main(){
    int index_min;
    //string input;
    string input;
    char temp;
    

    cin >> input;
    int n = input.length();

    for (int i=0;i<n-2;i+=2){
        index_min=i;

        for (int j=i+2;j<n;j+=2){
            if (input[j]<input[index_min]){
                index_min=j;
            }
        }
        if (index_min!=i){
            temp=input[i];
            input[i]=input[index_min];
            input[index_min]=temp;
        }
    }
    cout<<input;
}