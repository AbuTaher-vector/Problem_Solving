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

       int n,k;
       cin>>n>>k;
       char a;
       string s;
       vector<int>v(27);
       cin>>s;
       while(k--)
       {
           cin>>a;
           v[a-'a']++;
       }
       long long int ans=0,cnt=0;
       for(int i=0;i<s.size();i++)
       {
           if(v[s[i]-'a']==0)
           {
               ans+=(cnt*(cnt+1))/2;
               cnt=0;

           }
           else cnt++;
       }
       ans+=(cnt*(cnt+1))/2;
       cout<<ans<<'\n';


}