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
        char ch='E';
        cin>>t>>s;
        for(nn i=0;i<t;i++)
        {

            if(s[i]=='0' && ch=='E') ch='S';
         else if(s[i]=='0' && ch=='S') ch='W';
           else if(s[i]=='0' && ch=='W') ch='N';
           else  if(s[i]=='0' && ch=='N') ch='E';
           else  if(s[i]=='1' && ch=='E') ch='N';
            else  if(s[i]=='1' && ch=='N') ch='W';
            else  if(s[i]=='1' && ch=='W') ch='S';
              else if(s[i]=='1' && ch=='S') ch='E';
        }
        cout<<ch<<endl;
    }

}
