#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn t,sum=0,j=1;
    cin>>t;
    nn k=t*2-1;
    for(int i=1;i<=k;i++)
    {
        sum+=j;
        j+=2;
        if(i==(k/2+1)) j=1;
    }
   cout<<sum<<endl;


}