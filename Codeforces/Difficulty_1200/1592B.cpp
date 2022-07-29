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
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        vector<int>t(v.begin(),v.end());
       sort(t.begin(),t.end());
       bool fact=true;
       for(int i=0;i<x;i++)
       {
            if(n-1-i<x && v[i]!=t[i])
            {
                fact=false;
                break;
            }
       }
       if(fact) cout<<"YES";
       else cout<<"NO";
       cout<<'\n';

}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();
}
