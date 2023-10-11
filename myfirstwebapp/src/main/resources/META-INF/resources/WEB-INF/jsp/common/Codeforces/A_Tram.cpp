#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    int curr=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        int out,in;
        cin>>out>>in;
        curr+=in-out;
        maxi=max(maxi,curr);
    }
    cout<<maxi;
}
