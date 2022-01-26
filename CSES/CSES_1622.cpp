#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn k=1000000007;
int main()
{
	ss s;
	cin>>s;
	vector<ss>v;
	sort(s.begin(),s.end());
	v.push_back(s);

	while(next_permutation(s.begin(),s.end()))
	{
		v.push_back(s);
	}
	cout<<v.size()<<endl;
	for(nn i=0;i<v.size();i++) cout<<v[i]<<"\n";
}