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
    char x;
    nn arrx[tt+1]={0},arry[tt+1]={0};
    for(nn i=1;i<=tt;i++)
    {
        for(nn j=1;j<=tt;j++)
        {
            cin>>x;
            if(x=='C')
            {
                arrx[i]++,arry[j]++;
            }
        }

    }
    nn sum=0;
    for(nn i=1;i<=tt;i++) sum+=(arrx[i]*(arrx[i]-1))/2,sum+=(arry[i]*(arry[i]-1))/2;
    cout<<sum<<endl;



}
