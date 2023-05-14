#include "bits/stdc++.h"
using namespace std;
void code(){
	string s;
	map<char,int>mp;
	cin>>s;
	string k=s;
	for(auto x:s) mp[x]++;
		if(mp.size()==1) cout<<-1<<"\n";
	    else{
            reverse(k.begin(),k.end());
            if(k==s) cout<<s.size()-1<<"\n";
            else cout<<s.size()<<"\n";
	    }
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}