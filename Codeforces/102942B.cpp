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
       nn arr[t+1],cnt=0,cntt=0;
       for(nn i=0;i<t;i++)
       {
           cin>>arr[i];
           if(arr[i]%2==0) cnt++;
           else cntt++;
       }
       if(cntt) cout<<cnt<<endl;
       else cout<<-1<<endl;
    }

}