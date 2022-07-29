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
        int ans=0;
        vector<int>v;
        v.push_back(s[0]);
        if(s.size()==1)
        {
            cout<<"NO"<<'\n';
            return 0;
        }
        for(int i=1;i<s.size();i++)
        {
            if(v.size())
            {
                if(v.back()==s[i]) ans++,v.pop_back();
                else v.push_back(s[i]);
            }
            else v.push_back(s[i]);
        }
        if(ans&1) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';

        
        
}    
