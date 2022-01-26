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
    nn arr[tt];
    for(nn i=0;i<tt-1;i++) cin>>arr[i];
    nn a,b,sum=0;
    cin>>a>>b;
    a--,b--;
    for(nn i=a;i<b;i++) sum+=arr[i];
   cout<<sum<<endl;


}
