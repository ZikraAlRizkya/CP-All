#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int N, i, j;
    vector<int> himpunan;
    ll H, K;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> H;
        himpunan.push_back(H);
    }
    cin >> K;
    i=0, j=0;
    while(himpunan[i] <= K){
        int angka;
        angka = himpunan[i]*himpunan[j];
        if(j<himpunan.size() && find(himpunan.begin(), himpunan.end(), angka) == himpunan.end()){
            if(angka <= K){
                himpunan.push_back(angka);
            }
            j++;
        }else{
            i++;
            j=i;
        }
    }
    sort(himpunan.begin(), himpunan.end());
    cout << himpunan.size();
}
