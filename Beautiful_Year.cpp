#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int year;
    int t=1;
    cin >> year;

    while(t){
        bool d_year=true;
        year+=1;
        string str_year=to_string(year);
        
        sort (str_year.begin(),str_year.end());
        //cout << str_year <<" "<< year<<endl;
        for(int i=0;i<str_year.length();i++){
            if (str_year[i]==str_year[i+1]){
                d_year=false;
                break;
            }
        }
        if (d_year==true){
            t--;
        }
    }
    cout << year<<endl;
}