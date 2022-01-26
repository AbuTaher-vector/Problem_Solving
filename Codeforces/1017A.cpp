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
    nn a,b,c,d,cnt=1;
    cin>>a>>b>>c>>d;
    nn sum=a+b+c+d;
    tt--;
    while(tt--)
    {
        cin>>a>>b>>c>>d;
        nn sum2=a+b+c+d;
        if(sum<sum2) cnt++;
    }
    cout<<cnt<<endl;

}
