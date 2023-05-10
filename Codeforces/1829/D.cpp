#include "bits/stdc++.h"
using namespace std;
void code(){
	int n,m;
	cin>>n>>m;
	if(m>n) cout<<"NO\n";
	else if (m==n) cout<<"YES\n";
	else{
        if(n%3!=0) cout<<"NO\n";
        else{
            queue<int>q;
            map<int,int>mp;
            q.push(n);
            while(!q.empty()){
                 int x=q.front();
                 q.pop();
                 if(x%3==0){
                 	int a=(x/3);
                 	int b=a*2;
                 	q.push(a);
                 	q.push(b);
                 	mp[a]++,mp[b]++;
                 }
            }
            if(mp[m]>0) cout<<"YES\n";
            else cout<<"NO\n";
        }
	}
}
int main(){
   int tt;
   cin>>tt;
   while(tt--) code();
} 