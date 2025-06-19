#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    long long N, kue;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> N;
        long long total = 0;
        long long minVal = INT_MAX;
        for(int j=0;j<N;j++){
            cin >> kue;
            minVal = min(minVal, kue);
            total += kue;
        }
        cout << total-minVal*N << "\n";
    }
}
