#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   nn tt,x;
   cin>>tt;
   pair<nn,nn>m[1000];
   for(nn i=0;i<tt;i++)
    {
         cin>>x;
        m[i].first=x;
       m[i].second=i+1;
   }
  sort(m,m+tt);
  reverse(m,m+tt);
  nn sum=1,a=1;
  for(nn i=1;i<tt;i++)
  {
      sum+=m[i].first*a+1;
      a++;
  }
  cout<<sum<<endl;
  for(nn i=0;i<tt;i++) cout<<m[i].second<<" ";
  cout<<endl;

}