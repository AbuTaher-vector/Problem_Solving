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
        nn a,d;
        cin>>a>>d;
        nn arr[a+1];
        for(nn i=0;i<a;i++) cin>>arr[i];
         for(nn i=0;i<a;i++)
         {
             nn cnt=0;
                     while(arr[i]>0)
                  {
                      nn k=arr[i];
                      while(k>0)
                      {
                          if(k%10==d)
                          {
                              cnt++;
                              break;
                          }
                          k/=10;
                      }
                      if(cnt>0) break;
                      arr[i]-=d;

                 }
                if(cnt)  cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

         }



    }

}