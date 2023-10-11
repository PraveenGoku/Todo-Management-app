#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_map<string,int> m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ans+=m[s];
    }
    cout<<ans;
    return 0;
}
