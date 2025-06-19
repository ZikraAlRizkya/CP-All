#include <bits/stdc++.h>
using namespace std;

int main(){
    string kata;
    bool cek = true;
    getline(cin, kata);
    int i=0;
    while(i<kata.length()&&cek){
        kata[i] = tolower(kata[i]);
        if(!isalnum(kata[i])){
            cek=false;
        }
        i++;
    }
    reverse(kata.begin(),kata.end());
    if(cek==true){
        cout << kata;
    }else{
        cout << "Emor tidak beruntung :(";
    }
}
