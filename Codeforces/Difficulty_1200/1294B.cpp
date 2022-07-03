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
int code()
{
   int n;
   cin>>n;
   vector<pair<int,int>>v;
   int x,y;
   v.push_back({0,0});
   for(int i=0;i<n;i++)
   {
       cin>>x>>y;
       v.push_back({x,y});
   }
   sort(v.begin(),v.end());
   string s;
   for(int i=0;i<v.size()-1;i++)
   {
       if(v[i].second>v[i+1].second)
       {
          cout<<"NO"<<"\n";
          return 0;
       }
       int a=v[i+1].first-v[i].first;
       int b=v[i+1].second-v[i].second;
       while(a--) s.push_back('R');
       while(b--) s.push_back('U');

   }
   cout<<"YES\n"<<s<<"\n";
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}