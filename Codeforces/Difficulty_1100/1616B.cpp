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
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1)  cout<<s<<s<<'\n';
    else if(s[0]==s[1]) cout<<s[0]<<s[1]<<'\n';
    else
    {
        string ans;
        ans.push_back(s[0]);
        for(int i=1;i<n;i++)
        {
            if(s[i]>s[i-1]) break;
            else ans.push_back(s[i]);
        }
        cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';

    }
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}