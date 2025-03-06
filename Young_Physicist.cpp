#include <iostream>

using namespace std;

int main(){
    int rows;
    cin >> rows;
    int cols = 3;
    int x=0,y=0,z=0;
    int matrix [rows][cols];

    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> matrix [i][j];
        }
    }

    for(int i=0;i<rows;i++){
        x+=matrix[i][0];
    }

    for(int j=0;j<rows;j++){
        y+=matrix[j][1];
        //cout << y << " ";
    }

    for(int k=0;k<rows;k++){
        z+=matrix[k][2];
    }

    if(x==0 && y==0 && z==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    cout << x <<" " << y << " " << z;
}