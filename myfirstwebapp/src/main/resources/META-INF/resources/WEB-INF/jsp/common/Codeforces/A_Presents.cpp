#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back({j,i+1});
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i.second<<" ";
    }
}
