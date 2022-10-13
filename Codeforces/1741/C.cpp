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
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
    long long int sum=0;
    long long int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        long long int j,track=i+1,k=i,sum2=0;
        for(j=i+1;j<n;j++)
        {
            sum2+=v[j];
            if(sum2==sum) 
                {
                    track=max(track,j-k);
                    k=j;
                    sum2=0;
                }
            if(sum2>sum) break;

        }
        if(sum2==0 && j==n) ans=min(ans,track);
    }
    cout<<ans<<'\n';
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}