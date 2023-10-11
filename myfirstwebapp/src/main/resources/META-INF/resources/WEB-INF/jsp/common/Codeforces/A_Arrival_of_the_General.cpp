#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        maxi=max(maxi,x);
        mini=min(mini,x);
    }
    int maxindex=0;
    int minindex=0;
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            maxindex=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==mini){
            minindex=i;
            break;
        }
    }
    int opp=0;
    if(maxindex>minindex) opp=-1;
    int ans=maxindex+(n-minindex-1)+opp;
    cout<<ans;
    return 0;
}
