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
void code()
{
   int t;
   cin>>t;
   vector<string>v[4];
   map<string,int>mp;
   string x;
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<t;j++)
      {
           cin>>x;
           mp[x]++;
           v[i].push_back(x);
      }

   }

   vector<int>q;

   for(int i=0;i<3;i++)
   {
        long long int sum=0;
        for(int j=0;j<t;j++)
        {
            string k=v[i][j];
            if(mp[k]==1) sum+=3;
            else if(mp[k]==2) sum+=1;
        }
        q.push_back(sum);
   }
   for(int i=0;i<3;i++) cout<<q[i]<<" ";
    cout<<'\n';

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}