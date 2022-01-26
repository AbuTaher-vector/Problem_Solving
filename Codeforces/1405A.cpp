#include<bits/stdc++.h>
#define ll long long
#define db double
#define P pair<db,db>
#define mp make_pair
#define fi first
#define se second
#define INF 0x3f3f3f3f3f3f3f3f
#define eps 1e-8
#define N 210
#define M 998244353
using namespace std;

int T,n,m,num[N];

int main()
{
	int i,j;
	cin>>T;
	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++) scanf("%d",&num[i]);
		for(i=n;i>=1;i--) printf("%d ",num[i]);
		puts("");
	}
}