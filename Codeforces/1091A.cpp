#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
       nn y,b,r;
       cin>>y>>b>>r;
       nn x=min(y,min(b-1,r-2));
       cout<<3*x+3<<endl;


}