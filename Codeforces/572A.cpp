#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn a,b,x,y;
	cin>>a>>b>>x>>y;
	nn ar[a+1],arr[b+1];
	for(nn i=0;i<a;i++) cin>>ar[i];
		for(nn i=0;i<b;i++) cin>>arr[i];
			nn k=ar[x-1],cnt=0;
		reverse(arr,arr+b);
		for(nn i=0;i<b;i++)
		{
			if(arr[i]<=k) break;
			else cnt++;
		}
		if(cnt>=y) cout<<"YES\n";
		else cout<<"NO\n";


	

}