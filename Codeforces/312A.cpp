#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    nn tt;
    cin>>tt;
    getchar();
    while(tt--) 
    {
         ss s;getline(cin,s);
        nn a=s.size()>=5 && s.substr(0,5)=="miao.";
    nn b=s.size()>=5 && s.substr(s.size()-5,5)=="lala.";
    if(a==b) cout<<"OMG>.< I don't know!"<<nl;
    else if(a) cout<<"Rainbow's"<<nl;
    else if(b) cout<<"Freda's"<<nl;
    }
    
}