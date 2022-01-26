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
        nn a,b,c,d,k,x,y;
        cin>>a>>b>>c>>d>>k;
        if(a%c!=0) x=a/c+1;
         if(b%d!=0) y=b/d+1;
        if(a%c==0) x=a/c;
        if(b%d==0) y=b/d;

        if(x+y<=k) cout<<x<<" "<<y<<endl;
        else cout<<-1<<endl;


    }

}