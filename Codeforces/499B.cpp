#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn n,m;
   cin>>n>>m;
   map<ss,ss>mp;
   ss a,b;
   while(m--)
   {
      cin>>a>>b;
      mp[a]=b;
   }
   vector<ss>v;
   while(n--)
   {
      cin>>a;
      v.push_back(a);
   }
   for(nn i=0;i<v.size();i++)
   {
      for(auto x:mp) {
         if(x.first==v[i])
         {
            ss q=x.first,w=x.second;
            nn len1=q.size();
            nn len2=w.size();
            if(len1<=len2) cout<<q;
            else cout<<w;

            cout<<" ";
            break;
         }
      }

   }
   cout<<nl;
   

}