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
            nn t,pos,flag=0;
            ss s;
            cin>>t>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='8')
                {
                    flag=1;
                    pos=i;
                    break;
                }
            }
            if(flag==1 && t-pos>=11) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
}