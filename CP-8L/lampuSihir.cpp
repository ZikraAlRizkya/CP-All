#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int k;
    vector<int> total;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int data, banyak, k1;
        k1 = k;
        banyak = 0;
        cin >> data;
        while(k1!=data){
            if(k1>data){
                k1 /= 2;
                banyak++;
            }else if(k1<data){
                k1++;
                banyak++;
            }
        }
        total.push_back(banyak);
    }
    int minBil = *min_element(total.begin(), total.end());
    cout << minBil;
    return 0;
}
