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
       vector<int>v(n),ans;
       int mn=INT_MAX,j;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           mn=min(v[i],mn);

       }
       int i;
       for(i=n-1;i>=0;i--) 
        {
            if(v[i]==mn) break;
            else ans.push_back(v[i]);
        }
        for(j=i;j>=0;j--)
        {
            if(v[j]==mn) ans.push_back(v[i]);
            else break;
        }
        reverse(ans.begin(),ans.end());
        int cnt=0;
        if(j>=0) cnt=ans.size();
        for(int k=0;k<=j;k++) ans.push_back(v[k]);
            if(is_sorted(ans.begin(),ans.end())) cout<<cnt<<'\n';
           else cout<<-1<<'\n';
}
