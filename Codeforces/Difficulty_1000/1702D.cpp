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
    string s;
    int t;
    cin>>s>>t;
    int sum=0;
    for(int i=0;i<s.size();i++) sum+=s[i]-'a'+1;
    string k=s;
    sort(k.begin(),k.end());
    while(1)
    {
        if(sum<=t) break;
        sum-=k.back()-'a'+1;
        k.pop_back();
    }
    vector<int>v(30);
    for(int i=0;i<k.size();i++) v[k[i]-'a']++;

        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a']) 
            {
                cout<<s[i];
                v[s[i]-'a']--;
            }
        }
        cout<<'\n';

   
}
int main() {
     setup();
     
     int tt;
     cin>>tt;
     while(tt--) code();
}