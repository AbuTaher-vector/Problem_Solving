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
    vector<nn>ans;
    for(nn i=0;i<n;i++) cin>>v[i];
      if(n%2)
      {
         cout<<"NO"<<nl;
         return 0;
      }
      sort(v.begin(),v.end());
     nn i=0,j=n/2;
     while(j<n)
     {
        ans.push_back(v[i]);
        ans.push_back(v[j]);
        i++;j++;

     }
     for(nn i=1;i<n;i+=2)
     {
        nn a=i-1;
        nn b=i+1;
        if(b==n) b=0;
        if(ans[a]>=ans[i] || ans[b]>=ans[i])
        {
           cout<<"NO"<<nl;
           return 0;
        }
     }
     cout<<"YES"<<nl;
     for(auto x:ans) cout<<x<<" ";
      cout<<nl;

    
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