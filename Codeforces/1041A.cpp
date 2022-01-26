#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
       nn tt,sum=0;
       cin>>tt;
       nn arr[tt+1];
       for(int i=0;i<tt;i++) cin>>arr[i];
       sort(arr,arr+tt);
        for(int i=0;i<tt-1;i++)
        {
            arr[i]++;
            sum+=(arr[i+1]-arr[i]);
        }
        cout<<sum<<endl;


}