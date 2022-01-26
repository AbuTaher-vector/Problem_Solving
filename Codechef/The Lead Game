#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,sum=0,summ=0,d1=0,d2=0,lead1=0,lead2=0;
    cin>>tt;
    while(tt--)
    {
        int x,y;
        cin>>x>>y;
        sum+=x;
        summ+=y;
        if(sum>summ)  d1=sum-summ;
        if(sum<summ)  d2=summ-sum;
        if(d1>lead1) lead1=d1;
        if(d2>lead2) lead2=d2;
    }
    if(lead1>lead2) cout<<1<<" "<<lead1<<endl;
    else if(lead2>lead1) cout<<2<<" "<<lead2<<endl;

}
