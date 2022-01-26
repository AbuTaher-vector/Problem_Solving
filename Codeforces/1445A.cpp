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
           nn n,x,flag=0;
           cin>>n>>x;
           nn ar[n+1],arr[n+1];
           for(nn i=0;i<n;i++) cin>>ar[i];
            for(nn i=0;i<n;i++) cin>>arr[i];
            sort(ar,ar+n);
            sort(arr,arr+n);
            reverse(arr,arr+n);
            for(nn i=0;i<n;i++)
            {
                if(ar[i]+arr[i]>x)
                {
                    flag=1;
                    break;
                }
            }
           if(flag==0) cout<<"Yes"<<endl;
          else cout<<"NO"<<endl;
       }



}
