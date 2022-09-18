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
    int n;
    long long int t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        int mx=v[0],mn=v[0],cnt=0;
        for(auto x:v)
        {
            mx=max(x,mx);
            mn=min(x,mn);
            if(mx-mn>2*t)
            {
                cnt++;
                mx=x;
                mn=mx;
            }
        }
        cout<<cnt<<'\n';
   
}
int main() {
     setup();
     
     int tt;
     cin>>tt;
     while(tt--) code();
}