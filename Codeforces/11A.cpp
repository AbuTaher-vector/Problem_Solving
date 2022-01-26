#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,k;
    cin>>tt>>k;
    nn arr[tt+1];
    nn cnt=0;
    for(nn i=0;i<tt;i++) cin>>arr[i];
    for(nn i=1;i<tt;i++)
    {
        while(arr[i-1]>=arr[i])
        {
               if(arr[i-1]>=arr[i])
            {
              nn n=arr[i-1]-arr[i];
            if(n==0) cnt+=1,arr[i]+=k;
            else
               {
                if(n%k==0) cnt+=n/k,arr[i]+=(k*(n/k));
                else cnt+=n/k+1,arr[i]+=(k*(n/k+1));

              }
            }

        }

    }
    cout<<cnt<<endl;

}