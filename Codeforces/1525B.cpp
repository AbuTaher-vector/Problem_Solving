#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn n;
	cin>>n;
	nn arr[n+1];
	for(nn i=0;i<n;i++) cin>>arr[i];
		nn index,cnt=0;
		for(nn i=0;i<n;i++) if(arr[i]!=i+1) cnt++;
		if(cnt==0) cout<<0<<"\n";
	else
	{
		if(arr[0]==1 || arr[n-1]==n) cout<<1<<"\n";
        else if(arr[n-1]==1 && arr[0]==n) cout<<3<<"\n";
        else cout<<2<<"\n";

	}
        
		
}
			
				
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}