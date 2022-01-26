#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn tt;
	cin>>tt;
	vector<nn>v;
	nn capacity=0;
	while(tt--)
	{
		nn x,y;
		cin>>x>>y;
		capacity-=x;
		capacity+=y;
		v.push_back(capacity);

	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	cout<<v[0]<<"\n";

  
}