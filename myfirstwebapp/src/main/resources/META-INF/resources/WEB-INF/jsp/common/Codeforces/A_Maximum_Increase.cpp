#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    n=arr.size();
    int ans=1;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
            ans=max(ans,count);
        }
        else{
            count=1;
        }
    }
    cout<<ans;
}
