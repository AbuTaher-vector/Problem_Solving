#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
       ll tt;
       cin>>tt;
       while(tt--)
       {
           ll x1,y1,x2,y2;
           cin>>x1>>y1>>x2>>y2;
           if(x1==x2) cout<<max(y1,y2)-min(y1,y2)<<endl;
           else if(y1==y2) cout<<max(x1,x2)-min(x1,x2)<<endl;
           else cout<<max(y1,y2)-min(y1,y2)+max(x1,x2)-min(x1,x2)+2<<endl;
       }
}
