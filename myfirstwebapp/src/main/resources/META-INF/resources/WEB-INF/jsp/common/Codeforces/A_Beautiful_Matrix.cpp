#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
        pair<int,int> p;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                int x;
                cin>>x;
                if(x==1){
                    p={i+1,j+1};
                }
            }
        }
        cout<<abs(p.first-3)+abs(p.second-3);
        return 0;
}
