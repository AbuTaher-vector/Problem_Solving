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
	nn a[x+1],ar[x+1];
	vector<nn>v;
	for(nn i=0;i<x;i++) cin>>a[i];
	for(nn i=0;i<x;i++) cin>>ar[i];
		sort(a,a+x);
	   sort(ar,ar+x);
	   reverse(ar,ar+x);
	   for(nn i=0;i<x;i++) v.push_back(a[i]+ar[i]);
	   	sort(v.begin(),v.end());
	   reverse(v.begin(),v.end());
	   cout<<v[0]<<endl;



	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
  
}