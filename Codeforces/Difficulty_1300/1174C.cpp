#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}  
const int N=1e6;
bool v[N];
void prime()
{
    for(int i=2;i<=N;i++)
    {
        if(!v[i])
        {
            for(int j=i*2;j<=N;j+=i) v[j]=true; 
        }
    }
}    
int main()
{
       setup();
       prime();
       int n;
       cin>>n;
       vector<int>ans(n+1);
       int cnt=1;
       for(int i=2;i<=n;i++)
       {
            if(!v[i])
            {
                for(int j=i;j<=n;j+=i) if(ans[j]==0) ans[j]=cnt;

               cnt++;
            }
       }
      for(int i=2;i<=n;i++) cout<<ans[i]<<" ";
        cout<<'\n';
}    
