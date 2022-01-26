#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
     nn n; ss s;
      cin>>n>>s;
      ss a="14689";
      ss arr[15]={"22","25","27","32","33","35","52","57","72","75","55","77"};
      nn pos;
      for(nn i=0;i<a.size();i++)
      {
            pos=s.find(a[i]);
            if(pos!=-1)
            {
                  cout<<1<<nl<<a[i]<<nl;
                  return 0;
            }
      }

      for(nn i=0;i<12;i++)
      {
            ss k=arr[i];
            nn x=s.find(k[0]);
            nn y=s.find(k[1],x+1);
             if(x!=-1 && y!=-1)
            {
                        cout<<2<<nl<<k[0]<<k[1]<<nl;
                        return 0;
                  
            }
      }
     cout<<n<<nl<<s<<nl;
     return 0;
     
      

}
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code();

}