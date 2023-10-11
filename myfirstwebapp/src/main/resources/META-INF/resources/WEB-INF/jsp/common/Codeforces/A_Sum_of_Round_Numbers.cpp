#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        int T;
        cin>>T;
        while(T--){
            string s;
            cin>>s;
            int n=s.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                if(s[i]=='0') continue;
                int x=int(s[i]-'0');
                x=x*pow(10,n-i-1);
                ans.push_back(x);
            }
            cout<<ans.size()<<endl;
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return 0;
}
