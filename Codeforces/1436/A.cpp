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
        nn n ,m,sum=0;
        cin>>n>>m;
        nn arr[n+1];
        for(nn i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }
        if(sum==m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

   }


}