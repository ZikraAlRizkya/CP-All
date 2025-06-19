#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    long long N, total, ganjil, angka;

    cin >> T;
    for(int i=0;i<T;i++){
        cin >> N;
        angka=0;
        if(N%2==0){
            ganjil = N/2;
            for(int j=1;j<=ganjil;j++){
                angka += j;
            }
        }else{
            ganjil = (N+1)/2;
            for(int j=1;j<ganjil;j++){
                angka += j;
            }
            if(ganjil==1){
                angka=1;
            }
        }
        total = ganjil + (N-1) + angka-1;
        total = total % 1000000007;
        cout << total << "\n";
    }
}
