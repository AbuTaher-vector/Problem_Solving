#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
   nn n;
   cin>>n;
   vector<nn>v(n);
   nn sum=0;
   for(nn i=0;i<n;i++)
   {
      cin>>v[i];
      sum+=v[i];

   }
   for(nn i=0;i<n;i++)
   {
        sum-=v[i];
        if(sum%(n-1)==0 && sum/(n-1)==v[i])
        {
           cout<<"YES"<<nl;
           return 0;
        }
        sum+=v[i];
   }
   cout<<"NO"<<nl;
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