#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   nn n;
   cin>>n;
   ss arr[n+1];
   for(nn i=0;i<n;i++) cin>>arr[i];
      ll k=0,q=0;
   while(k<5)
   {
      vector<nn>v;
      for(nn i=0;i<n;i++)
      {
         ss x=arr[i];
         nn cnt=0;
         for(nn j=0;j<x.size();j++)
         {
            if('a'+k==x[j]) cnt++;
            else cnt--;
         }
         v.push_back(cnt);
      }
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      ll word=0,count=0;
      for(nn i=0;i<v.size();i++)
      {
         if(word+v[i]>0) count++;
         word+=v[i];
      }
      q=max(q,count);
      k++;

   }
   cout<<q<<"\n";

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();

}