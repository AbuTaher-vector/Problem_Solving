#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

     nn n;
     cin>>n;
     vector<nn>v(n),a(4);
     for(nn i=0;i<n;i++) cin>>v[i];
      nn ans=0;
      for(nn i=0;i<n;i++)
      {
         a[0]++;
         for(nn j=3;j>=0;j--)
         {
            if(a[j])
            {
               if(j+v[i]>3) ans+=a[j];
               else a[j+v[i]]=a[j];

               a[j]=0;

            }
         }


      }
      cout<<ans<<nl;
     

}