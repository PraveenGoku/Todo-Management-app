#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int a,b,n;
        cin>>a>>b>>n;
        int ans=0;
        while(a<=n && b<=n){
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
            ans++;
        }   
        cout<<ans<<endl;
    }
    
}
