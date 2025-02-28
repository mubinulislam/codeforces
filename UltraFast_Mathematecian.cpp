#include <iostream>
#include <bitset>

using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin >> b;

    int bitsize= max(a.size(),b.size());

    // Convert string binary to bitset
    bitset<100> num1(a);
    bitset<100> num2(b);

    bitset<100> output = num1 ^ num2;

    string xor_output= output.to_string().substr(100-bitsize);
    cout << xor_output;
}