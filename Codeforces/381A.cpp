#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int tt;
    cin>>tt;
    int arr[tt+1];
    for(int i=0;i<tt;i++)  cin>>arr[i];
    int k=0,l=tt-1,fact=0,sum=0,summ=0;
    while(k<=l)
    {
        if(arr[k]>arr[l])
        {
           if(fact==0)
           {
               sum+=arr[k];
               fact=1;
           }
           else
             {
               summ+=arr[k];
               fact=0;
             }

           k++;
        }
        else
        {
           if(fact==0)
           {
               sum+=arr[l];
               fact=1;
           }
           else
             {
               summ+=arr[l];
               fact=0;
           }
           l--;
        }
    }
    cout<<sum<<" "<<summ<<endl;

}