#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int i=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        i++;
    }
    cout<<i;
}
