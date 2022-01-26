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
        nn x,y;
        cin>>x>>y>>s;
        nn u=0,r=0,l=0,d=0;
        for(nn i=0;i<s.size();i++)
        {
            if(s[i]=='U') u++;
              if(s[i]=='R') r++;
                if(s[i]=='L') l++;
                  if(s[i]=='D') d++;
        }
        if(x>=0 && y>=0 && r>=abs(x)  && u>=abs(y)) cout<<"YES"<<endl;
         else if(x<=0 && y<=0 && l>=abs(x)  && d>=abs(y)) cout<<"YES"<<endl;
       else  if(x>=0 && y<=0 && r>=abs(x)  && d>=abs(y)) cout<<"YES"<<endl;
          else if(x<=0 && y>=0 && l>=abs(x)  && u>=abs(y)) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

    }

}