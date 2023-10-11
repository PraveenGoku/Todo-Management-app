#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        // n, k, l, c, d, p, nl, np
        int n,k,l,c,d,p,nl,np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        int totjuice=k*l/nl;
        int totlime=c*d;
        int totsalt=p/np;
        int ans=min(totjuice,min(totlime,totsalt))/n;
        cout<<ans;
        return 0;
}
