#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        int T;
        cin>>T;
        int ans=1;
        while(T--){
          int x;
          cin>>x;
          if(x==1){
            ans=0;
            cout<<"HARD";
            break;
          }
        }
        if(ans)
            cout<<"EASY";
        return 0;
}
