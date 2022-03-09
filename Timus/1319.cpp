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
    nn arr[n+1][n+1]={0};
    nn k=1;
    for(nn i=0;i<1;i++)
    {
        for(nn j=n-1;j>=0;j--){
            nn x=i,y=j;
            while(x<n && y<n)
            {
                arr[x][y]=k;
                k++,x++,y++;
            }
        }

    }
    for(nn i=1;i<n;i++) 
    {
         nn j=0;
           nn x=i,y=j;
            while(x<n)
            {
                arr[x][y]=k;
                k++,x++,y++;
            }
       
    }
       
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<n;j++) cout<<arr[i][j]<<" ";
            cout<<nl;
    } 
    


      
}