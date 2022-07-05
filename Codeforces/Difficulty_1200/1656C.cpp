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
   int n;
   cin>>n;
   vector<int>v(n);
   map<int,int>mp;
   int zero=0,one=0,odd=0,two=0,ev=0;
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
      if(v[i]==1) one++;

      if(v[i]==0) zero++;
      if(v[i]==2) two++;

   }
   if(one)
   {
      if(zero || two) 
         {
            cout<<"NO"<<"\n";
            return 0;
         }
         sort(v.begin(),v.end());
         for(int i=0;i<n-1;i++)
         {
            if(v[i+1]==v[i]+1)
            {
               cout<<"NO"<<"\n";
               return 0;
            }
         }
   }
   cout<<"YES"<<"\n";
   return 0;

}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}