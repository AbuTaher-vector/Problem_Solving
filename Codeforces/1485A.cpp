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
        nn a,b;
        cin>>a>>b;
        if(a<b) cout<<1<<endl;
        else if(a==b) cout<<2<<endl;
        else
        {
            nn k,l=b,mn=1000000;
            for(nn i=l;;i++)
            {
                k=a;
                 nn x=i,cnt=1;
                if(x==1)   x++;
                while(k/x!=0)
                {
                   k/=x;
                    cnt++;
                }
                cnt+=(x-b);
                if(cnt<=mn) mn=cnt;
                else if(cnt>mn) break;
            }
            cout<<mn<<endl;

        }



    }
}
