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

       int n,m;
       cin>>n>>m;
       char s[n][m],ans[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++) cin>>s[i][j];
       }
       char a='B',b='W';
       for(int i=0;i<n;i++)
       {   
           if(i%2==0) a='B',b='W';
           else a='W',b='B';

           for(int j=0;j<m;j++)
           {
              if(s[i][j]=='-') ans[i][j]='-';
              else
              {
                  if(j%2==0) ans[i][j]=a;
                  else ans[i][j]=b;
              }
           }
       }
       for(int i=0;i<n;i++)
       {
          for(int j=0;j<m;j++) cout<<ans[i][j];
            cout<<'\n';
       }



}