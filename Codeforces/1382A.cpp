#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int m,n,k,flag=0;
        cin>>m>>n;
        int ar[m+1],arr[n+1];
        for(int i=0;i<m;i++) cin>>ar[i];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<m;i++)
        {
             for(int j=0;j<n;j++)
             {
                if(ar[i]==arr[j])
                {
                    k=ar[i];
                    flag=1;
                    break;
                }
             }
             if(flag==1) break;
        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<1<<" "<<k<<endl;

    }
}