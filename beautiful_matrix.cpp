#include<iostream>

using namespace std;

int main(){
    const int rows=5;
    const int cols=5;
    int m,n;
    int rotation;
    int matrix[rows][cols];  //using 2D array to form a matrix from user input

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (matrix[i][j]==1){
                rotation=abs((i+1)-3)+abs((j+1)-3);
            }
        }
    }
    cout<<rotation;
    return 0;
}