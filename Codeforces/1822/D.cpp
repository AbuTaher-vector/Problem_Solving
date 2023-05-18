#include "bits/stdc++.h"
using namespace std;
void code(){
    int n;
    cin>>n;
    if(n==1) cout<<1<<"\n";
    else if(n%2) cout<<-1<<"\n";
    else{
        int t = n/2;
        int x = n,y = 1;
        while(t--) {
            cout<<x<<" "<<y<<" ";
            x-=2,y+=2;
        }
       cout<<"\n";
    }
    
}
int main(){
    int tt;
    cin>>tt;
    while(tt--) code();
}