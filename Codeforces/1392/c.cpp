#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int i,n,j,k;
    long long int s=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(k=0;k<n-1;k++)
        {
            if(a[k]>a[k+1])
                s=s+(a[k]-a[k+1]);
        }
        cout<<s<<endl;
        s=0;


    }
    return 0;
}
