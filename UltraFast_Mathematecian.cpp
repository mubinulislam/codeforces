#include <iostream>
#include <bitset>

using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin >> b;
    // Find the max input length dynamically.
    int bitsize= max(a.size(),b.size());

    // Convert string binary to bitset
    bitset<100> num1(a);
    bitset<100> num2(b);

    // Perform XOR operation
    bitset<100> output = num1 ^ num2;

    string xor_output= output.to_string().substr(100-bitsize);
    /*output.to_string() converts bitset<N> to a string, which has .substr().✅
    output (which is bitset<N>) itself does not support .substr(). ❌
    If you write output.substr(...), you'll get a compiler error because bitset doesn’t have .substr().
    ✅ output.to_string() converts the bitset<100> to a string.
    ✅ .substr(100 - bitsize) extracts only the required bits.*/
    cout << xor_output;
}