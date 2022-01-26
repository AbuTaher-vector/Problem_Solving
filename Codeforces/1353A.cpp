#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int ar[n+1],arr[n+1],sum=0;
         for(int i=0;i<n;i++) cin>>ar[i];
          for(int i=0;i<n;i++) cin>>arr[i];
           if(k!=0){
          sort(ar,ar+n);
          sort(arr,arr+n);
          reverse(arr,arr+n);
          for(int i=0;i<n;i++)
          {
              if(ar[i]<arr[i]) swap(ar[i],arr[i]);
              if(i+1==k) break;
          }
          for(int i=0;i<n;i++) sum+=ar[i];
          cout<<sum<<endl;
        }
        else
        {
            for(int i=0;i<n;i++) sum+=ar[i];

            cout<<sum<<endl;
        }


    }
}