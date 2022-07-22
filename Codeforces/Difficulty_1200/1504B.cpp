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
   cin>>n;
   string a,b;
   cin>>a>>b;
   int c=0,d=0,j=0;
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++)
   {
       if(a[i]=='1') c++;
       else d++;
       if(c==d)
       {
            v.push_back({j,i});
            j=i+1;
            c=0,d=0;
       }
   }  
   for(auto x:v)
   {
       if(a[x.first]==b[x.first]) continue;
       else
       {
          for(int j=x.first;j<=x.second;j++)
          {
             if(a[j]=='1') a[j]='0';
             else a[j]='1';
          }
       }
   }    
   if(a==b) cout<<"YES\n";
   else cout<<"NO\n";
}
int main()
{
       setup();
       
       int t;
       cin>>t;
       while(t--) code();
}
