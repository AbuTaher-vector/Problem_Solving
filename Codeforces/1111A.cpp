#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  ss a,b;
  cin>>a>>b;
  ss x="aeiou";
  if(a.size()!=b.size()) 
  {
   cout<<"No"<<nl;
   return 0;
  }
  for(nn i=0;i<a.size();i++)
  {
     if(a[i]!=b[i])
     {
         nn pos=x.find(a[i]);
         nn pos2=x.find(b[i]);
         if((pos>=0 && pos2<0) || (pos<0 && pos2>=0))
         {
            cout<<"No"<<nl;
            return 0;
         }
     }
  }
  cout<<"Yes"<<nl;
   
}

