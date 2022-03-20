#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int arr[n+1],i,j,flag=0;
        for(i=1;i<=n;i++) cin>>arr[i];
        for(i=1;i<n-1;i++)
        {
            if(arr[i]+arr[i+1]<=arr[n])
            {
                cout<<i<<" "<<i+1<<" "<<n<<endl;
                    flag=1;
                    break;
            }
        }
        if(flag==0) cout<<"-1"<<endl;


    }
}