#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{ 
     ss s;
     cin>>s;
     nn x=s[0]-'a'+1,y=s[1]-'0';
    nn ans=8;
     if(x-2<1 || y+1>8) ans--;
      if(x-1<1 || y+2>8) ans--;
       if(x+2>8 || y+1>8) ans--;
        if(x+1>8 || y+2>8) ans--;
         if(x-2<1 || y-1<1) ans--;
          if(x-1<1 || y-2<1) ans--;
           if(x+2>8 || y-1<1) ans--;
            if(x+1>8 || y-2<1) ans--;
            cout<<ans<<nl;
     

}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}