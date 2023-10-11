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
          unordered_map<int,int> m;
          m[1]=1;
          m[2]=3;
          m[3]=6;
          m[4]=10;
          int rank=s.size();
          int digit=int(s[0]-'0');
          digit--;
          int ans=digit*10+m[rank];
          cout<<ans<<endl;
        }
        return 0;
}
