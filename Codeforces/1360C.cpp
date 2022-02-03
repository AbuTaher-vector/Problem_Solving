#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
     nn n,x;
     cin>>n;
     vector<nn>even,odd;
     for(nn i=1;i<=n;i++)
     {
          cin>>x;
          if(x&1) odd.push_back(x);
          else even.push_back(x);

     }
     
     if(odd.size()%2==0 && even.size()%2==0) cout<<"YES"<<nl;
     else
     {
          nn flag=0;
          for(nn i=0;i<odd.size();i++)
          {
               for(nn j=0;j<even.size();j++)
               {
                    if(abs(odd[i]-even[j])==1)
                    {
                        cout<<"YES"<<nl;
                        return 0;
                    }

               }
          }
          cout<<"NO"<<nl;

     }
     return 0;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}