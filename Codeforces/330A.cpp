#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn r ,c,fact=0,sum=0,cnt=0,cnt2=0,i,j;
    cin>>r>>c;
    char arr[r+1][c+1];
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++) cin>>arr[i][j];
    }
     for(i=1;i<=r;i++)
    {
        fact=0;
        for(j=1;j<=c;j++)
        {
            if(arr[i][j]=='S')
            {
                fact=1;
                break;
            }
        }
         if(fact==0)
         {
             sum+=c;
             cnt++;
         }
    }
     for(j=1;j<=c;j++)
    {
        fact=0;
        for(i=1;i<=r;i++)
        {
            if(arr[i][j]=='S')
            {
                fact=1;
                break;
            }
        }
         if(fact==0)
         {
             sum+=r;
             cnt2++;
         }
    }
    cout<<sum-cnt*cnt2<<endl;

}