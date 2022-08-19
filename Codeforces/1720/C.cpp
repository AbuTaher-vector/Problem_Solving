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
      int n,m;
      cin>>n>>m;
      string s[n];
      for(int i=0;i<n;i++) cin>>s[i];
        int flag=0,one=0;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
            if(s[i][j]=='1') one++;
          }
      }

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
               if(s[i][j]=='0')
               {
                    if(j+1<m && s[i][j+1]=='0')
                    {
                        flag++;
                        break;
                    }
                     if(j-1>=0 && s[i][j-1]=='0')
                    {
                        flag++;
                        break;
                    }
                     if(i+1<n && s[i+1][j]=='0')
                    {
                        flag++;
                        break;
                    }
                     if(i-1>=0 && s[i-1][j]=='0')
                    {
                        flag++;
                        break;
                    }
                    if(i-1>=0 && j+1<m && s[i-1][j+1]=='0')
                    {
                        flag++;
                        break;
                    }
                   if(i-1>=0 && j-1>=0 && s[i-1][j-1]=='0')
                    {
                        flag++;
                        break;
                    }
                    if(i+1<n && j+1<m && s[i+1][j+1]=='0')
                    {
                        flag++;
                        break;
                    }
                     if(i+1<n && j-1>=0 && s[i+1][j-1]=='0')
                    {
                        flag++;
                        break;
                    }
               }
          }
      }
       if(one==n*m) cout<<one-2<<'\n';
      else if(flag) cout<<one<<'\n';
      else cout<<one-1<<'\n';
      
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}