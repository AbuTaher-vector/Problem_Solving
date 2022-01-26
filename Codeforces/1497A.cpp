#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn x;
	cin>>x;
	nn arr[x+1];
	vector<nn>v;
	vector<nn>v1;
	for(nn i=0;i<x;i++) cin>>arr[i];
		sort(arr,arr+x);
	for(nn i=0;i<x-1;i++)
	{
		if(arr[i]!=arr[i+1]) v.push_back(arr[i]);
		else if(arr[i]==arr[i+1]) v1.push_back(arr[i]);
	}
	v.push_back(arr[x-1]);
	for(nn i=0;i<v.size();i++) cout<<v[i]<<" ";
		for(nn i=0;i<v1.size();i++) cout<<v1[i]<<" ";
			cout<<"\n";

}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}