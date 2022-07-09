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
   int n,k;
   cin>>n;
   vector<int>a[n+1];
   for(int i=0;i<n;i++)
   {
      cin>>k;
      a[k].push_back(i+1);
   }
   int mn=INT_MAX;
   for(int i=1;i<=n;i++)
   {
      if(a[i].size())
      {
         int x=0;
         if(a[i][0]>1) x++;
         for(int j=0;j<a[i].size()-1;j++) 
            {
               if(a[i][j+1]-a[i][j]>1) x++;
            }
            if(a[i].back()<n) x++;
            mn=min(mn,x);


      }
   }
   cout << mn << '\n';

}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();

}