#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="";
    int j=0;
    int i=1;
    while(j<n){
        str+=s[j];
        for(int k=0;k<i;k++){
            j++;
        }
        i++;
    }
    cout<<str;
    
}
