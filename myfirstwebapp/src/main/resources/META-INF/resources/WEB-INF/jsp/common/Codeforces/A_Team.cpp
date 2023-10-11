#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        int T;
        cin>>T;
        int ans=0;
        while(T--){
            int count=0;
            for(int i=0;i<3;i++){
                int x;
                cin>>x;
                if(x==1)
                    count++;
            }
            if(count>=2)
                ans++;

        }
        cout<<ans;
        return 0;
}
