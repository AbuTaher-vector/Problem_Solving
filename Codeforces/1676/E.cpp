#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,k;
    ll w=0;
    cin>>n>>k;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) 
        {
            cin>>v[i];
            w+=v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(nn i=1;i<n;i++) v[i]+=v[i-1];
      nn x;
      while(k--)
      {
           cin>>x;
           if(x>w) cout<<-1<<nl;
           else
           {
               nn z=lower_bound(v.begin(),v.end(),x)-v.begin();
               z++;
               cout<<z<<nl;

           }
           

      }

  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}