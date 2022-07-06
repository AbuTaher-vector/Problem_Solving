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
     
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin>>v[i];
      int x=pow(2,n);
    for(int i=0;i<x;i++)
    {
       int sum=0;
       for(int j=0;j<n;j++)
       {
             if(i&(1<<j))
             {
                 sum+=v[j];
                 sum%=360;
             }
             else
             {
               sum-=v[j];
               sum%=360;
             }
       }
       if(sum%360==0)
       {
         cout<<"YES"<<"\n";
         return 0;
       }
    }

      cout<<"NO"<<"\n";
      return 0;

}