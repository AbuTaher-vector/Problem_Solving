#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn t;
	cin>>t;
	nn arr[t+1];
	vector<nn>v;
	for(nn i=0;i<t;i++) cin>>arr[i];
		sort(arr,arr+t);
	for(nn i=0;i<t-1;i++) v.push_back(arr[i+1]-arr[i]);
	sort(v.begin(),v.end());
    cout<<v[0]<<endl;
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
  
}