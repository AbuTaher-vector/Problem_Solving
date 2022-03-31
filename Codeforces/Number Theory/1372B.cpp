#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	nn a;
	cin>>a;
	if(a%2==0)
	{
		cout<<a/2<<" "<<a/2<<"\n";
		return 0;
	}
	vector<nn>v;
	for(nn i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) 
		{
			v.push_back(a/i);
			v.push_back(i);
		}

	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	if(v.size()==0) cout<<1<<" "<<a-1<<"\n";
	else cout<<v[0]<<" "<<a-v[0]<<"\n";
	return 0;
	


	

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();

}