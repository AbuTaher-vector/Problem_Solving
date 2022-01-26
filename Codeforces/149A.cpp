#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn k;
    cin>>k;
    nn arr[13];
    for(nn i=0;i<12;i++) cin>>arr[i];
    sort(arr,arr+12);
    reverse(arr,arr+12);
    if(k==0) cout<<0<<endl;
     else{
            nn sum=0,flag=0,ind;
        for(nn i=0;i<12;i++)
        {
            sum+=arr[i];
            if(sum>=k)
            {
                ind=i+1,flag=1;
                break;
            }


        }
        if(flag) cout<<ind<<endl;
        else cout<<-1<<endl;
     }
}