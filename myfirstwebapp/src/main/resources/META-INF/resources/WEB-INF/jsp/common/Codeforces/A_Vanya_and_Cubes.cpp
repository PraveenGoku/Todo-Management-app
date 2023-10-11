#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    int cubes=0;
    if(n==1){
        cout<<1;
        return 0;
    } 
    for(int i=1;i<=n;i++){
        cubes+=i*(i+1)/2;
        ans=max(ans,i);
        if(cubes>n){
            break;
        }
    }
    cout<<ans-1;
}
