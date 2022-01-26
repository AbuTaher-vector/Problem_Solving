#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,sum=0,cnt=0,y=0;
    cin>>tt;
    for(int i=1;;i++)
    {

        sum+=(y+=i);
        if(sum<=tt) cnt++;
        else break;
    }
    cout<<cnt<<endl;

}