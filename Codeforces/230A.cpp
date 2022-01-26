#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0,flag=1,i;
    cin>>a>>b;
    pair<int ,int>x[1000];

        for(i=0;i<b;i++) cin>>x[i].first>>x[i].second;

        cnt=a;
       sort(x,x+b);

        for(i=0;i<b;i++)
        {
            if(cnt<=x[i].first)
            {
                flag=0;
                break;
            }
            else cnt+=x[i].second;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}