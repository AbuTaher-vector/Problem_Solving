#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={100,20,10,5,1};
    int n,change,coin,result=0,i;
    cin>>n;
    while(n>0)
    {
        for(i=0;i<5;i++)
        {
            if(arr[i]<=n)
            {
                change=arr[i];
                break;
            }
        }
        coin=n/change;
        n-=(change*coin);
        result+=coin;

    }
    cout<<result<<endl;
}