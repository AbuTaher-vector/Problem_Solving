#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	ll p,a,b,c;
	cin>>p>>a>>b>>c;
		
		
        ll k=p/a;
        if(p%a!=0) k++;
        a*=k;

        ll l=p/b;
        if(p%b!=0) l++;
        b*=l;

        ll m=p/c;
        if(p%c!=0) m++;
        c*=m;

		ll ans=min(a-p,min(b-p,c-p));
		cout<<ans<<"\n";


}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}