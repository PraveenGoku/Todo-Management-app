#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    string tab;
    cin>>tab;
    vector<string> v;
    int play=0;
    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        v.push_back(s);
        if(s[0]==tab[0] || s[1]==tab[1]){
            play=1;
            break;
        }
    }
    if(play) cout<<"YES";
    else cout<<"NO";
}
