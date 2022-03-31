#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int is_prime(nn x)
{
	for(nn i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 1; 
		
	}
	return 0;
}
int code()
{
	nn n,k;
	cin>>n>>k;
	if(n<=k)
	{
		cout<<1<<"\n";
		return 0;
	}
	nn ans=n;
	for(nn i=2;i<=sqrt(n);i++)
	{

         if(n%i==0)
         {
         	if(i<=k) ans=min(ans,n/i);
          if(n/i<=k) ans=min(ans,i);
         } 

	}
	cout<<ans<<"\n";
	return 0;



}
int main()
{
	
	nn tt;
	cin>>tt;
	while(tt--) code();
	

	

}