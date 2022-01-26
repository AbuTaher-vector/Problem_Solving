#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn n;
	cin>>n;
	nn arr[n+1];
	nn cnt=0,cntt=0;
	for(nn i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0) cnt++;
		if(arr[i]<0) cntt++;

	} 
	n++;
	n/=2;
	if(cntt>=n) cout<<-1<<endl;
	else if(cnt>=n) cout<<1<<endl;
	else cout<<0<<endl;

  
}