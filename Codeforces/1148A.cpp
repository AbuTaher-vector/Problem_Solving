#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

       ll a,b,c;
       cin>>a>>b>>c;
       ll mn=min(a,b);
       ll mx=max(a,b);
       if(mn==mx) cout<<2*c+2*mn<<endl;
       else cout<<2*c+(2*mn)+1<<endl;


}