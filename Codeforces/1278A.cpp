#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
   ss p,h;
   cin>>p>>h;
   vector<nn>v(26,0);
   for(nn i=0;i<p.size();i++) v[p[i]-'a']++;
      for(nn i=0;i<h.size();i++)
      {
         vector<nn>v1(26,0);
         for(nn j=i;j<h.size();j++)
         {
            v1[h[j]-'a']++;
            if(v==v1)
            {
               cout<<"YES"<<nl;
               return 0;
            }

         }

      }
      cout<<"NO"<<nl;
      return 0;

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}
