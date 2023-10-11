#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    int i=1;
    while(w--){
        cost+=i*k;
        i++;
    }
    int ans=max(cost-n,0);
    cout<<ans;
}
