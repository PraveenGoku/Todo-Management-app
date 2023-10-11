#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    int side=1;
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                cout<<'#';
            }
            cout<<endl;    
        }
        else{
            if(side==1){
                for(int j=0;j<c-1;j++){
                    cout<<'.';
                }
                cout<<'#'<<endl;
                side=0;
            }
            else{
                cout<<'#';
                for(int j=0;j<c-1;j++){
                    cout<<'.';
                }
                cout<<endl;
                side=1;   
            } 
        }
    }
    return 0;
}
