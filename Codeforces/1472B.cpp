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
       nn t;
       cin>>t;
       nn arr[t+1],sum=0,one=0;
       for(nn i=0;i<t;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
           if(arr[i]==1) one++;
       }
      if(sum%2!=0) cout<<"NO"<<endl;
      else if((sum/2)%2==1 && one==0) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;

    }

}


