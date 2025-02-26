#include <iostream>
using namespace std;

int main(){
    int a;  //Limak
    int b;  //Bob
    //int n=2;
    int i=0;
    cin >> a >> b; /*Need to calculate when Limak is larger than Bob (a>b). 
limaks weight is tripled and Bobs weight is doubled.*/
    for (i=1; ;i++){ /*here condition is not given, so the for loop becomes an infinite loop.
    no need of extra variable to count. We can just use i as counter.*/
        a=a*3;
        b=b*2;
        //n+=1;
        if (a>b){
            break;
        }
        else{
            continue;
        }
    }
    cout << i;
}