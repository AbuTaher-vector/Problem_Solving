#include "bits/stdc++.h"
using namespace std;
void code(){
	string s;
	cin>>s;
	map<char,int>mp;
	for(int i=0;i<s.size()/2;i++) mp[s[i]]++;
		if(mp.size()==1) cout<<"NO\n";
	    else cout<<"YES\n";
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}