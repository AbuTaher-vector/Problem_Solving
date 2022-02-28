#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    char arr[n+1][n+1];
    for(nn i=0;i<n;i++)
    {
         for(nn j=0;j<n;j++) cin>>arr[i][j];
    }
     for(nn i=0;i<n;i++)
    {
         for(nn j=0;j<n;j++) 
         {
            if(j+5<n)
            {
                nn cnt=0;
                for(nn k=0;k<6;k++) if(arr[i][j+k]=='#') cnt++;
                    if(cnt>=4)
                    {
                        cout<<"Yes"<<nl;
                        return 0;
                    }
            }
            if(i+5<n)
            {
                nn cnt=0;
                for(nn k=0;k<6;k++) if(arr[i+k][j]=='#') cnt++;
                    if(cnt>=4)
                    {
                        cout<<"Yes"<<nl;
                        return 0;
                    }
            }
            if(j+5<n && i+5<n)
            {
                nn cnt=0;
                for(nn k=0;k<6;k++) if(arr[i+k][j+k]=='#') cnt++;
                    if(cnt>=4)
                    {
                        cout<<"Yes"<<nl;
                        return 0;
                    }
            }
            if(j-5>=0 && i+5<n)
            {
                nn cnt=0;
                for(nn k=0;k<6;k++) if(arr[i+k][j-k]=='#') cnt++;
                    if(cnt>=4)
                    {
                        cout<<"Yes"<<nl;
                        return 0;
                    }
            }
               
              
         }
    }
    cout<<"No"<<nl;
   
}