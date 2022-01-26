#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn tt;
    cin>>tt;
    for(nn i=1;i<=tt;i++)
    {
        nn n,t;
        cin>>n>>t;
        nn arr[n+1];
        for(nn k=0;k<n;k++) cin>>arr[k];
            while(t--)
            {
                char a;
                cin>>a;
                if(a=='P')
                {
                    nn m,n;
                    cin>>m>>n;
                    swap(arr[m],arr[n]);
                }
                else if(a=='S')
                {
                    nn m;
                    cin>>m;
                    for(nn j=0;j<n;j++) arr[j]+=m;

                }
                else if(a=='M')
                {
                    nn m;
                    cin>>m;
                    for(nn j=0;j<n;j++) arr[j]*=m;

                }
                else if(a=='D')
                {
                    nn m;
                    cin>>m;
                    for(nn j=0;j<n;j++) arr[j]/=m;

                }
                else reverse(arr,arr+n);
            }
            cout<<"Case "<<i<<":"<<nl;
            for(nn k=0;k<n;k++) cout<<arr[k]<<" ";
                cout<<nl;

    }
   
}