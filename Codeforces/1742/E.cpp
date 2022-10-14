#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("put.txt", "w", stdout);
     #endif
}
void code()
{
   
    long long  n,k;
    cin>>n>>k;
    vector<long long int>v(n),a(n),b(k);
    long long  int sum=0;
       cin>>v[0];
       sum+=v[0];
        a[0]=sum;
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        a[i]=sum;
        if(v[i-1]>v[i]) v[i]=v[i-1];
    }

      for(int i=0;i<k;i++) cin>>b[i];
        for(int i=0;i<k;i++)
        {
            int in=upper_bound(v.begin(),v.end(),b[i])-v.begin();
            
            if(in-1<0) cout<<0<<" ";
            else cout<<a[in-1]<<" ";
        }
    
    cout<<'\n';
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}