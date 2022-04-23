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
   for(nn i=0;i<n;i++) cin>>v[i];
     vector<nn>a;
     nn cnt=1,cntt=0;
     for(nn i=0;i<n-1;i++)
     {
         if(v[i]==v[i+1]) cnt++;
         else 
         {
            a.push_back(cnt);
            cnt=1;
         }

     }
     a.push_back(cnt);
     nn l=-1,r=-1;
     for(nn i=0;i<n;i++)
     {
           if(a[i]>1)
           {
               l=i;
               break;
           }
     }

   reverse(a.begin(),a.end());
   for(nn i=0;i<n;i++)
     {
           if(a[i]>1)
           {
               r=i;
               break;
           }
     }
     if(r!=-1) r=a.size()-1-r;
    if(l==-1 || r==-1)
    {
     cout<<0<<nl;
     return 0;
    }
     nn ans=0;
     reverse(a.begin(),a.end());
    for(nn i=l;i<=r;i++) ans+=a[i];
    if(ans<3) cout<<0<<nl;
    else if(ans==3) cout<<1<<nl;
    else cout<<ans-3<<nl; 
  

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