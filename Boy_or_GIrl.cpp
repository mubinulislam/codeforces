#include<iostream>
#include<math.h>

using namespace std;

int main(){
    string input;
    int unique=0;
    int gender;
    int index_min;
    char temp;
    cin >> input;

    int n=input.length();

// sorting the input string using selection sort algorithm
    for (int i=0;i<n-1;i++){
        index_min=i;

        for (int j=i+1;j<n;j++){
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
    //cout << input << endl;
// after sorting we iteret through the string char by char to find the duplicates
    for (int k=0; k<n;k++){
        if (input[k]!=input[k+1]){
            unique+=1;
        }
    }
    //cout << "unique: " << unique << endl;
    if (unique%2!=0){
        cout << "IGNORE HIM!";
    }
    else{
        cout << "CHAT WITH HER!";
    }
}