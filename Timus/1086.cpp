#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
nn n=1e6;
vector<nn>v(n,1);
vector<nn>k;
void prime()
{
   vector<nn>v(n,1);
    for(nn i=2;i<=n;i++)
    {
      if(v[i]==1)
      {
          for(nn j=i*2;j<=n;j+=i) v[j]=0;
      }
    }
    for(nn i=2;i<v.size();i++) if(v[i]==1) k.push_back(i);

}
int main()
{
     prime();
     nn x,w;
     cin>>x;
     while(x--)
     {
        cin>>w;
        cout<<k[w-1]<<nl;
     }

     
      
}