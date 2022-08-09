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
int code()
{
    string s;
    cin>>s;
    for(int i=s.size()-1;i>0;i--)
    {
        int x=s[i-1]-'0';
        int y=s[i]-'0';
        if(x+y>9)
        {
            string k=to_string(x+y);
            s[i-1]=k[0],s[i]=k[1];
            cout<<s<<'\n';
            return 0;
        }
    }
    int n=s.size();
    int x=s[0]-'0',y=s[1]-'0';
     s.erase(0,1);
     s.erase(0,1);
     string k=to_string(x+y);
     k+=s;
     cout<<k<<'\n';
}
int main()
{
       setup();
        
       int tt;
       cin>>tt;
       while(tt--) code();

      
}    
