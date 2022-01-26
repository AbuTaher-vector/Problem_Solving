#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
   ss s="abcdefghijklmnopqrstuvwxyz";
   ss a;
   cin>>a;
   set<char>b;
   for(nn i=0;i<a.size();i++) 
      {
         b.insert(a[i]);
         nn pos = s.find(a[i]);
         if(pos>a.size()-1)
         {
            cout<<"No\n";
            return 0;
         }
      }
      if(b.size()!=a.size())
      {
         cout<<"NO\n";
         return 0;
      }

      nn pos = a.find('a');
      if(pos<0)
      {
         cout<<"NO\n";
         return 0;
      }
      for(nn i=0;i<pos;i++)
      {
         nn c = s.find(a[i]);

         nn d = s.find(a[i+1]);
         if(c-d<0)
         {
            cout<<"NO\n";
            return 0;
         }

      }
      for(nn i=pos;i<a.size()-1;i++)
      {
         nn c = s.find(a[i]);

         nn d = s.find(a[i+1]);
         if(c-d>0)
         {
            cout<<"NO\n";
            return 0;
         }

      }
      cout<<"YES\n";
      return 0;

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}