#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        vector<int> arr(3,0);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=arr[2]-arr[0];
        cout<<ans;
        return 0;
}
