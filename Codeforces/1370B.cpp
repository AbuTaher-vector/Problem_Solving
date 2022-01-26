#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	nn n;
	cin>>n;
	nn t;
	vector<nn>a;
	vector<nn>b;
	for(nn i=0;i<2*n;i++)
	{
		cin>>t;
		if(t & 1) a.push_back(i+1);
		else b.push_back(i+1);

	} 
	nn cnt=0;
	if(a.size()>1)
	{
		nn k=a.size();
		if(k & 1) k--;
		for(nn i=0;i<k;i=i+2)
		{
			cout<<a[i]<<" "<<a[i+1]<<"\n";
			cnt++;
			if(cnt==n-1) return 0;
		}
	}
	if(b.size()>1)
	{
		nn k=b.size();
		if(k & 1) k--;
		for(nn i=0;i<k;i=i+2)
		{
			cout<<b[i]<<" "<<b[i+1]<<"\n";
			cnt++;
			if(cnt==n-1) return 0;
		}
	}
	return 0;

}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
	

	

}