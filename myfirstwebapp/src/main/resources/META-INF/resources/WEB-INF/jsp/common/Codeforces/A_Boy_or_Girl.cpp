#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    string s;
    cin>>s;
    unordered_set<char> m;
    for(auto i:s){
        m.insert(i);
    }

    if(m.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
