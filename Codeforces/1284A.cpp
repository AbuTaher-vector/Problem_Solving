#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      ll n,m;
      cin>>n>>m;
      vector<ss>v;
      vector<ss>v2;
      ss s;
      for(nn i=0;i<n;i++)
      {
          cin>>s;
          v.push_back(s);
      }
      for(nn i=0;i<m;i++)
      {
          cin>>s;
          v2.push_back(s);
      }
      ll q;
      cin>>q;
      while(q--)
      {
          nn x;
          cin>>x;
          nn pos,pos2;
         if(x%n!=0) pos=x%n-1;
          if(x%m!=0) pos2=x%m-1;
          if(x%n==0) pos=n-1;
          if(x%m==0) pos2=m-1;
          cout<<v[pos]<<v2[pos2]<<endl;
      }

}