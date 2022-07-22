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
int main()
{
       setup();
       
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++) cin>>v[i];
        int mx=INT_MIN;
       int cnt=1;
       for(int i=0;i<n-1;i++)
       {
           if(v[i]*2>=v[i+1]) cnt++;
           else mx=max(mx,cnt),cnt=1;
       }
       mx=max(mx,cnt);
       cout<<mx<<'\n';
}
