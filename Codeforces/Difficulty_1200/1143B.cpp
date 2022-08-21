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
       
       string s;
       cin>>s;
       int mx=1;
       for(int i=0;i<s.size();i++) mx*=(s[i]-'0');

        for(int i=0;i<s.size()-1;i++)
        {
            int ans=1;
            for(int j=0;j<s.size();j++)
            {
               if(j<i) ans*=s[j]-'0';
               else if(i==j) ans*=(s[j]-1)-'0';
               else ans*=9;  

            }
            mx=max(mx,ans);
        }
        int anss=1;
        for(auto i=1;i<s.size();i++) anss*=9; 
        cout<<max(mx,anss)<<'\n';

}