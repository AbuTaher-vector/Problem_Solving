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
        int t,flag=0,cnt=0;
        ss s;
        cin>>t>>s;
        while(1)
        {
            flag=0;
             for(int i=0;i<s.size()-1;i++)
            {
                   if(s[i]=='A' && s[i+1]=='P')
                   {
                       flag=1;
                       s[i+1]='A';
                       i++;
                   }
             }
             if(flag==1) cnt++;
             else
             {
                 cout<<cnt<<endl;
                 break;
             }
        }


    }

}
