#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n;
    cin>>n;
    ss s;
    cin>>s;
    ss gre="",less="";
    nn flag=0;
    for(nn i=0;i<s.size();i++)
    {
        if(flag==1)
        {
            gre.push_back('0');
            less.push_back(s[i]);
        }
        else if(s[i]=='2')
        {
            gre.push_back('1');
            less.push_back('1');
        }
        else if(s[i]=='0')
        {
            gre.push_back('0');
            less.push_back('0');
        }
        else
        {
            gre.push_back('1');
            less.push_back('0');
            flag++;

        }

    }
    cout<<gre<<nl<<less<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}