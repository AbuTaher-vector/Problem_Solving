#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
       if(sum%n==0) cout<<sum/n<<endl;
       else cout<<sum/n+1<<endl;

    }
}