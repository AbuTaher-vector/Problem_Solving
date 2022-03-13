#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn cnt=0;
     while(1)
     {
        nn n,q,x;
        cnt++;
        cin>>n>>q;
        if(n==0 && q==0) break;
        vector<nn>v(n);
        for(nn i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());
          cout<<"CASE# "<<cnt<<":"<<nl;
          while(q--)
          {
            cin>>x;
            nn pos=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(v[pos]==x) cout<<x<<" found at "<<pos+1<<nl;
            else cout<<x<<" not found"<<nl;

          }
     }
    
}