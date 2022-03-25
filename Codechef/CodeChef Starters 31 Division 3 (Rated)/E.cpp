#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
   nn n;
   ll cnt=1,t=0,k,ans=0;
   cin>>n;
   vector<ll>v(n);
   for(nn i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
            k=0;
            while(v[0])
            {
                k++;
                v[0]>>=1;
            }
            t=pow(2,k)-1;
    for(nn i=1;i<n;i++)
    {
        if(v[i]<=t) cnt++;
        else
        {
            k=0;
            while(v[i])
            {
                k++;
                v[i]>>=1;
            }
            t=pow(2,k)-1;
            ans+=((cnt-1)*cnt)/2;
            cnt=1;

        }


    }
    ans+=((cnt-1)*cnt)/2;
    cout<<ans<<nl;


}
int main()
{ 
     nn tt;
     cin>>tt;
     while(tt--) code();   
}