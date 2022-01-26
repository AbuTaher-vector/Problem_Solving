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
        ss s;
        cin>>s;
        for(nn i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                if(s[i]==97) s[i]='b';
                else s[i]='a';
            }
           else
            {
                if(s[i]==122) s[i]='y';
                else s[i]='z';
            }
        }
        cout<<s<<endl;
    }
}