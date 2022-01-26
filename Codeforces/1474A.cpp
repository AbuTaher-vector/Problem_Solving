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
        nn t;
        ss s;
        cin>>t>>s;
        char a[t+1];
        a[0]='1';
        for(nn i=1;i<t;i++)
        {
            a[i]='1';
            if(a[i]+s[i]==a[i-1]+s[i-1]) a[i]='0';
        }
        for(nn i=0;i<t;i++) cout<<a[i];
        cout<<endl;

    }

}
