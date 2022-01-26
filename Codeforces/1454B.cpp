#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int cnt[1000005];
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
        nn x;
        cin>>x;
        nn arr[x+1];
          ll mn=123456789,s=-1;
        for(nn i=1;i<=x;i++) cnt[i]=0;
         for(nn i=1;i<=x;i++)  cin>>arr[i],cnt[arr[i]]++;
          for(nn i=1;i<=x;i++) if(cnt[arr[i]]==1 && arr[i]<mn) s=i,mn=arr[i];
          cout<<s<<endl;
    }

}
