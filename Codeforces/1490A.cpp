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
        nn n;
        cin>>n;
        nn arr[n+1];
        for(nn i=0;i<n;i++) cin>>arr[i];
        nn cnt=0;
         for(nn i=0;i<n-1;i++)
         {
             nn mx=max(arr[i],arr[i+1]);
             nn mn=min(arr[i],arr[i+1]);
             nn k;
             if(mx%mn==0) k=mx/mn;
             else k=(mx/mn)+1;
             if(k>2)
             {
                 while(1)
                 {
                     mn*=2;
                     cnt++;
                    nn w;
                    if(mx%mn==0) w=mx/mn;
                    else w=(mx/mn)+1;
                    if(w<=2) break;

                 }


             }

         }
     cout<<cnt<<endl;



    }

}
