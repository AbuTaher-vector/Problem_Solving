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
    string a,b,ans;
    cin>>a>>b;
    a+="#",b+="#";
    int k=0,j=1;
    if(a[0]!=b[0])
    {
        cout<<"NO\n";
        return 0;
    }
    ans.push_back(a[0]);
    for(int i=1;i<a.size();i++)
    {
          for(j=k+1;j<b.size();j++)
          {
               if(a[i]==b[j])
               {
                    ans.push_back(b[j]);
                    k=j;
                    break;
               }
               else
               {
                   if(b[j]!=ans.back())
                   {
                      cout<<"NO\n";
                      return 0;
                   }
               }
          }
          if(j==b.size()-1) break;
    }
    if(a==ans) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
int main()
{
       setup();
       
        int t;
        cin>>t;
        while(t--) code();
}
