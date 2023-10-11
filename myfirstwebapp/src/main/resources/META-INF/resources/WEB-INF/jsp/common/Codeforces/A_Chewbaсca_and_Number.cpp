#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        string s;
        cin>>s;
        int n=s.size();
        vector<int> arr;
        for(auto i:s){
            arr.push_back(int(i-'0'));
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(arr[0]>4 && arr[0]!=9){
                    arr[0]=9-arr[0];
                }
            }
            else{
                if(arr[i]>4){
                    arr[i]=9-arr[i];
                }
            }
        }
        for(auto i:arr){
            cout<<i;
        }
        return 0;
}
