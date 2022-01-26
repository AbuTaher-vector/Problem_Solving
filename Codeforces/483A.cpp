#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll l,r;
    cin>>l>>r;
    if(r-l<2 || (l%2==1 && r-l==2))
    {
    	cout<<-1<<"\n";
    	return 0;
        
    }
    if(l & 1) l++;
    cout<<l<<" "<<l+1<<" "<<l+2<<"\n";

}