#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    int ans=0;
    for(auto i:s){
        if(i=='4' || i=='7') ans++;
    }
    if(ans==4 || ans==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}
