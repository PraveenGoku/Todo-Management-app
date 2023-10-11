#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        int T;
        cin>>T;
        while(T--){
            int r,c;
            cin>>r>>c;
            vector<string> v;
            for(int i=0;i<r;i++){
                string s;
                cin>>s;
                v.push_back(s);
            }
            int ans=0;
            for(int i=0;i<r;i++){
                string s;
                s=v[i];
                if(s[c-1]=='R') ans++;
            }
            string s=v[r-1];
            for(auto i:s){
                if(i=='D') ans++;
            }
            cout<<ans<<endl;
        }
        return 0;
}
