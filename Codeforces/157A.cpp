#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn r[35],c[35];
int main()
{
   nn tt,cnt=0,m;
   cin>>tt;
   for(nn i=0;i<tt;i++)
   {
       for(nn j=0;j<tt;j++)
        {
            cin>>m;
            r[i]+=m;
            c[j]+=m;
        }
   }
    for(nn i=0;i<tt;i++)
   {
       for(nn j=0;j<tt;j++)
        {
            if(r[i]<c[j]) cnt++;

        }
   }
  cout<<cnt<<endl;


}
