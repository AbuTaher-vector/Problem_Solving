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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
      long long int sum=0,i;
   vector<int>ans;
   for(i=0;i<n;i++)
   {
      sum+=v[i];
      if(sum&1)
      {
         sum=0;
         ans.push_back(i+1);
      }

   }
   if(ans.size()<k)
   {
      cout<<"NO"<<"\n";
      return 0;
   }
   if((ans.size()-k)%2!=0)
   {
      cout<<"NO"<<"\n";
      return 0;
   }
   if(ans.back()!=n)
   {
      ans.pop_back();
      ans.push_back(n);
   }
   cout<<"YES"<<"\n";
   for(int i=0;i<k-1;i++) cout<<ans[i]<<" ";
      cout<<n<<"\n";
   return 0;
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}