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
int code()
{
   string s[8];
   for(int i=0;i<8;i++) 
   {
       for(int j=0;j<8;j++) cin>>s[i][j];
   }
   for(int j=0;j<8;j++)
   {
        int b=0;
         for(int i=0;i<8;i++)
         {
            if(s[i][j]=='B') b++;

         }
         if(b==8) 
         {
            cout<<'B'<<'\n';
            return 0;
         }
   }
   cout<<'R'<<'\n';
   return 0;
  
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}