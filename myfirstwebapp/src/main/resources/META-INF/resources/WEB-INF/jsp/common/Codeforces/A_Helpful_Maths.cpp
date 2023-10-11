#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
   string s;
   cin>>s;
   vector<int> v;
   for(auto i:s){
        if(i=='+') continue;
        v.push_back(int(i -'0'));
   }
   sort(v.begin(),v.end());
   int n=v.size();
   string str="";
   for(auto i:v){
        str+=to_string(i)+'+';
        // cout<<i<<" ";
   }
   str.pop_back();
   cout<<str;
}
