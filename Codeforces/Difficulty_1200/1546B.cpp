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
    int x,y;
    cin>>x>>y;
    x*=2;
    x--;
    string s[x];
    for(int i=0;i<x;i++) cin>>s[i];
    for(int i=0;i<y;i++)
    {
        map<char,int>mp;
        for(int j=0;j<x;j++) mp[s[j][i]]++;
        for(auto x:mp)
        {
            if(x.second%2==1)
            {
                cout<<x.first;
                break;
            }
        }

    }
    cout<<'\n';


}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();
}
