#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt;
    cin>>tt;
    while(tt--)
    {
        nn x;
        cin>>x;
        nn arr[x+1];
        for(nn i=0;i<x;i++) cin>>arr[i];
        sort(arr,arr+x);
        reverse(arr,arr+x);
        if(arr[x-1]==x) cout<<x<<endl;
        else
        {
            for(nn i=0;i<x;i++)
            {
                if(arr[i]<i+1)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }


}
