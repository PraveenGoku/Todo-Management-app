#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        int T;
        cin>>T;
        int ans=0;
        while(T--){
          char arr[3];
          bool flag=true;
          for(int i=0;i<3;i++){
             cin>>arr[i];
             if(arr[i]=='-')
                flag= false;
          }
          if(flag) ans++;
          else ans--;
        }
        cout<<ans;
        return 0;
}
