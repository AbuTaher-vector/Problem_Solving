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
int main()
{
       setup();

       int n;
       cin>>n;
       int x;
       map<int,int>mp;
       while(n--)
       {
          cin>>x;
          mp[x]++;
       }
       long long int cnt=0,ans=0;
       for(auto x:mp)
       {
           if(x.first>cnt)
           {
               cnt=x.first+x.second-1;
               long long int t=x.second-1;
               t=(t*(t+1))/2;
               ans+=t;
           }
           else
           {
               long long int t=x.second;
               t=(t*(t+1))/2;
               long long int a=cnt-x.first;
               t+=(a*x.second);
               ans+=t;
               cnt=cnt+x.second;

           }
       }
       cout<<ans<<'\n';
}
