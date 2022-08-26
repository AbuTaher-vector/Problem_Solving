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
       int d,k,x,y;
       cin>>d>>k;
       vector<pair<int,int>>v;
       while(d--)
       {
           cin>>x>>y;
           v.push_back({x,y});
       }
       int a=0,b=0;
       for(int i=0;i<v.size();i++)
       {
           a+=v[i].first;
           b+=(v[i].second-v[i].first);
       }
       
       if(a+b<k) cout<<"NO\n";
       else if(k<a) cout<<"NO\n";
       else
       {
           if(a>=k) b=0;
           else b=(k-a); 
          cout<<"YES\n";
          for(int i=0;i<v.size();i++)
          {
                int c=v[i].second-v[i].first;
                cout<<v[i].first+min(b,c)<<" ";
                b-=min(c,b);

          }
          cout<<'\n';
       }
}