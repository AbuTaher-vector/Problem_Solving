#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn a,b,c;
   cin>>a>>b>>c;
    if(a>b+c) cout<<'+'<<endl;
    else if(b>a+c) cout<<'-'<<endl;
    else if(a==b&&c==0) cout<<0<<endl;
    else cout<<'?'<<endl;

}
