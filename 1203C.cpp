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
int main() {

     setup();
     
      int n;
      cin>>n;
      long long int x;
      map<long long int,int>mp;
      while(n--)
      {
          cin>>x;
          mp[x]++;
      }      
      vector<pair<long long int,int>>p(mp.begin(),mp.end());

      long long int k=p[0].first;
      vector<long long int>v;
      for(int i=1;i<=sqrt(k);i++)
      {
          if(k%i==0)
          {
             v.push_back(i);
             if(i!=k/i) v.push_back(k/i);
          }
      }
     int ans=0;
     for(int i=0;i<v.size();i++)
     {
        int flag=1;
        for(int j=0;j<p.size();j++)
        {
            if(p[j].first%v[i])
            {
                flag=0;
                break;
            }
        }
        if(flag) ans++;
     }
     cout<<ans<<'\n';

}