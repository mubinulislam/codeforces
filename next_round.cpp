#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int k;
    int next_round = 0;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i]; 
    }
    for (int j = 0; j < n; j++){
        if (scores[j]>=scores[k-1] && scores[j]>0){
            next_round++;
        }
        else{
            continue;
        }
    }
    cout<<next_round;
    return 0;
}
