#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     nn tt;
     cin>>tt;
    while(tt--)
    {
        nn w,h,n,cnt=1;
        cin>>w>>h>>n;
        nn x=w,y=h;
       while(x%2==0)
       {
           x/=2;
           cnt*=2;
       }
       while(y%2==0)
       {
           y/=2;
           cnt*=2;
       }
       if(w%2!=0 && h%2!=0) cnt=1;
       if(cnt>=n) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }

}