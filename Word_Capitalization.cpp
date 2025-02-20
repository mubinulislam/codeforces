#include<iostream>

using namespace std;

int main() {
	string input;
	cin >> input;
    //cout << int(input[0]);
    if (int(input[0])<=122 && int(input[0]>=95)){
        int(input[0]-=32);
    }
    cout << input;
}