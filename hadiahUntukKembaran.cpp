#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int Q, budi, dono;
    long long N, X, Y;
    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> N >> X >> Y;
        budi = 0, dono =0;
        for(int j=1;j<=N;j++){
            if(j%X==0){
                budi++;
            }
            if(j%Y==0){
                dono++;
            }
            if(j%X==0 && j%Y==0){
                budi--;
                dono--;
            }
        }
        cout << budi << " " << dono << "\n";
    }
}
