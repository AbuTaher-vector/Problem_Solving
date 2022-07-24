#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
int main()
{
       setup();
       
        int n;
        cin>>n;
        vector<long long int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             b[i]=a[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(int i=1;i<n;i++) a[i]+=a[i-1];
            long long int sum=0;
        for(int i=1;i<n;i++)
        {
             sum+=a[i];
             sum+=b[i];
        }
        sum+=b[0];
        cout<<sum<<'\n';
}
