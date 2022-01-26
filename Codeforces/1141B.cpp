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
	vector<nn>v;
	for(nn i=0;i<n;i++) cin>>arr[i];
		nn cnt=0,cn=0;
		for(nn i=0;i<n*2;i++)
		{
			if(arr[i%n]==1) cnt++;
			else  cn=max(cnt,cn),cnt=0;
			
		}
		cn=max(cn,cnt);
		cout<<cn<<"\n";
  
}