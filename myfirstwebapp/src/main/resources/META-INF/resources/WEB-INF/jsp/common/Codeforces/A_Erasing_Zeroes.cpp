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
          int first=-1;
          int last=-1;
          for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    first=i;
                    break;
                }
          }
          for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    last=i;
                    break;
                }
          }
          if(first==-1){
            cout<<0<<endl;
            continue;
          }
          int ans=0;
          for(int i=first;i<=last;i++){
            if(s[i]=='0') ans++;
          }
          cout<<ans<<endl;
        }
        return 0;
}
