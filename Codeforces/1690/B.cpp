#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
   nn n,cnt=0,zero=0;
   cin>>n;
   vector<nn>a(n),b(n);
   for(nn i=0;i<n;i++) cin>>a[i];
      for(nn i=0;i<n;i++) cin>>b[i];

         vector<pair<nn,nn>>v;
      for(nn i=0;i<n;i++) v.push_back(make_pair(a[i],b[i]));
         sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      if(v[0].second>v[0].first)
      {
         cout<<"NO"<<nl;
         return 0;
      }
      nn com=v[0].first-v[0].second;
      for(nn i=1;i<n;i++)
      {
          if(v[i].second>v[i].first)
           {
             cout<<"NO"<<nl;
              return 0;
            }

            if(v[i].first==v[i].second && v[i].first==0) continue;

            if(v[i].first-v[i].second<com && v[i].second==0) continue;
             if(v[i].first-v[i].second<com && v[i].second!=0) 
               {
                  cout<<"NO"<<nl;
                  return 0;
               }

            if(v[i].first-v[i].second>com)
            {
               cout<<"NO"<<nl;
               return 0;
            }



      }
      cout<<"YES"<<nl;
      return 0;

          
      


}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     
     nn tt;
     cin>>tt;
     while(tt--) code();
     
}