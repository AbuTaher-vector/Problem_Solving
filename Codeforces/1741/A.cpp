#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("put.txt", "w", stdout);
     #endif
}
void code()
{
    string a,b;
    cin>>a>>b;
    if(a==b) cout<<'='<<'\n';
    else
    {
        if(a.back()=='S' && b.back()=='S')
        {
            if(a.size()>b.size()) cout<<'<'<<'\n';
            else if(a.size()<b.size()) cout<<'>'<<'\n';
        }
        else
        {
            if(a.back()=='S') cout<<'<'<<'\n';
            else if(a.back()=='M')
            {
                  if(b.back()=='L') cout<<'<'<<'\n';
                  else cout<<'>'<<'\n';

            }
            else
            {
                if(b.back()=='S' || b.back()=='M') cout<<'>'<<'\n';
                else
                {
                    if(a.size()>b.size()) cout<<'>'<<'\n';
                    else cout<<'<'<<'\n';
                }
            }
        }
    }
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}