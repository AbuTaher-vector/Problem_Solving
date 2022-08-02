#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}      
void code()
{
    int n,x=1000000007;
    cin>>n;
    vector<int>v(n);
    int k=n/2;
    for(int i=0;i<n;i++) cin>>v[i];
         cout<<k<<'\n';
     for(int i=0;i<n-1;i+=2)
     {
         cout<<i+1<<" "<<i+2<<" ";
         cout<<min(v[i],v[i+1])<<" "<<x<<'\n';
     }

        
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
        
}    
