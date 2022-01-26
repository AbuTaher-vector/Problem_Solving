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
        nn a,b,cnt=0;
        cin>>a>>b;
       nn k=abs(a-b);
        if(k>=5)
        {
            cnt+=k/5;
            k%=5;
        }
       if(k>=2)
        {
            cnt+=k/2;
            k%=2;
        }
        if(k==1) cnt++;

        cout<<cnt<<endl;


    }


}