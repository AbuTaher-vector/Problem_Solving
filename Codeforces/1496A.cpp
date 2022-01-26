
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
        nn n,t;
        cin>>n>>t;
        ss s;
        cin>>s;
        nn l=n;
        if(n%2!=0) l++;
        if(t==l/2) cout<<"NO"<<endl;
        else if(t==0) cout<<"YES"<<endl;
        else
        {
            nn flag=1;
            for(nn i = 0; i < t ; i++)
            {
                if(s[i] != s[n-1-i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    

}

