#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
    string output="";
    string s; // declaring the string variable.
    cin>>s; //taking input for the string.

    //converting the input string [s] into lower case.
    transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c);});
    
    //need to iterate through the string char by char, so we need for loop.
    for(int i=0;i<s.length();i++){
        // if the char is not among all the vowels, then we will put the char in a new string named "output".
        if (s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
            //before putting them in new string we also need to put a full stop (.). so we first inserted it and 
            //later we inserted the consonants by each iteration.
            output+='.';
            output+=s[i];
            continue;
        }
    }

    cout<< output;
}