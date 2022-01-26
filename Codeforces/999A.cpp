#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
       nn n,k,cnt=0;
       cin>>n>>k;
       nn arr[n+1];
       for(int i=0;i<n;i++) cin>>arr[i];
       for(int i=0;i<n;i++)
       {
           if(arr[i]<=k) cnt++;
           else break;
       }
       if(cnt!=n)
       {
             for(int i=n-1;i>=0;i--)
              {
            if(arr[i]<=k) cnt++;
            else break;
              }
       }
       cout<<cnt<<endl;

}