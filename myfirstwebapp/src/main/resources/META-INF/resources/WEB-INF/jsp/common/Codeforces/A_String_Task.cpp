#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    string s;
    cin>>s;
    unordered_set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('y');
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');
    st.insert('Y');
    vector<char> v;
    for(auto i:s){
        if(st.find(i)!=st.end()) continue;
        v.push_back(tolower(i));
    }
    string ans="";
    for(auto i:v){
        ans+=".";
        ans+=i;
    }
    cout<<ans;
}
