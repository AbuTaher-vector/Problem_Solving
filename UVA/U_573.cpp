#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    dd a,b,c,d;
    while(1)
    {
        cin>>a>>b>>c>>d;
        if(a==0) break;
         dd down=b*(d/100);
         dd x=0;
         nn d=1;
         while(1)
         {
           x+=b;
           if(x>a) break;
           if(b>0) b-=down;
           x-=c;
           if(x<0) break;
           d++;

         }
         if(x<0) cout<<"failure on day "<<d<<nl;
         else cout<<"success on day "<<d<<nl;
        

    }

    
}