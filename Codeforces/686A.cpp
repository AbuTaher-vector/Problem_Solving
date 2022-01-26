#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,cnt=0;
    cin>>n>>x;
    while(n--)
    {
        string s;
        long long a;
        cin>>s>>a;
        if(s[0]=='+')  x+=a;
        else if(s[0]=='-')
        {
            if(x<a) cnt++;
            else x-=a;
        }
    }
    cout<<x<<" "<<cnt;
}