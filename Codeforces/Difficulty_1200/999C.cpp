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
     string s;
     cin>>s;
     string a=s;
     sort(a.begin(),a.end());
     vector<int>v(27);
     for(int i=k;i<n;i++) v[a[i]-'a']++;
     string ans;
     for(int i=n-1;i>=0;i--)
     {
         if(v[s[i]-'a'])
         {
            ans.push_back(s[i]);
            v[s[i]-'a']--;
         }
     }
     reverse(ans.begin(),ans.end());
     cout<<ans<<"\n";


}