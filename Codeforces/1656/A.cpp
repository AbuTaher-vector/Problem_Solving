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
      cin>>n;
      vector<nn>v(n);
      for(nn i=0;i<n;i++) cin>>v[i];
        if(n==1) cout<<1<<" "<<1<<nl;
        else if(n==2) cout<<1<<" "<<2<<nl;
        else
        {
               vector<nn>x(v.begin(),v.end());
               sort(x.begin(),x.end());
               nn cnt=0;
               for(nn i=0;i<n;i++)
               {
                  if(v[i]==x[0]) 
                    {
                        cout<<i+1<<" ";
                        x[0]=0;
                        cnt++;
                    }
                    if(v[i]==x[n-1])
                    {
                        cout<<i+1<<nl;
                        cnt++;
                        x[n-1]=0;
                    }
                    if(cnt==2) break;

               }
        }
}
int main()
{ 
    nn tt;
    cin>>tt;
    while(tt--) code();

}