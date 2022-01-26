#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k,a,sum=1;
    cin>>x;
    while(sum%4!=0)
    {
        k=x;
        sum=0;
       while(k!=0)
       {
        a=k%10;
        sum+=a;
        k/=10;
       }
    if(sum%4==0)
    {
        cout<<x<<endl;
        break;
    }
    else x++;
    }






}