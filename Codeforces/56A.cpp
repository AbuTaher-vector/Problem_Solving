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
    nn cnt=0;
    while(tt--)
    {
        ss s;
        cin>>s;
        if(s[0]>'9')
        {
            if(s=="ABSINTH" ||  s=="BEER" || s=="BRANDY" || s=="CHAMPAGNE" || s=="GIN" || s=="RUM" || s=="SAKE" || s=="WINE" || s=="TEQUILA" || s=="VODKA" || s=="WHISKEY" ) cnt++;

        }
        else{
                nn sum=0;
            for(nn i=0;i<s.size();i++)
            {
                sum+=(s[i]-'0');
                sum*=10;

            }
            sum/=10;
            if(sum<18) cnt++;
        }
    }
    cout<<cnt<<endl;

}