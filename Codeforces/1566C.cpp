#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   
    ss a,b;
    nn n;
    cin>>n>>a>>b;
    nn ans=0;
    for(nn i=0;i<a.size();i++)
    {
        if(a[i]!=b[i]) ans+=2;
        else
        {
            if((a[i]!=a[i+1] && i+1<n) || (a[i]!=b[i+1] && i+1<n))
            {
               if(a[i]=='1')
               {
                  if((a[i+1]=='0' && b[i+1]=='0') || a[i+1]!=b[i+1])
                  {
                    ans+=2;
                    i++;
                  }
               }
               else
               {
                  if(a[i+1]!=b[i+1])
                  {
                    ans+=3;
                    i++;
                  }
                  else if(a[i+1]=='1' && b[i+1]=='1')
                  {
                    ans+=2;
                    i++;
                  }
               }
            }
            else
            {
                if(a[i]=='0') ans++;
            }
        }
        
    }
    cout<<ans<<nl;
}
nn main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}