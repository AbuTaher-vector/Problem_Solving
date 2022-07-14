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
void code()
{
    int n;
    cin >> n;
    vector<int>v(n+2);
    for(int i=0;i<n+2;i++) cin >> v[i];
    sort(v.begin(),v.end());
    long long int sum=0;
    for(int i=0;i<n;i++) sum+=v[i];
    if(sum == v[n] || sum == v[n+1])
    {
        for(int i=0;i<n;i++) cout << v[i] << " ";
            cout <<'\n';
    }
    else
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            sum-=v[i];
            sum+=v[n];
            if(sum == v[n+1])
            {
                flag++;
                v[i]=v[n];
                break;
            }
            sum-=v[n];
            sum+=v[i];
        }
        if(flag)
        {
            for(int i=0;i<n;i++) cout << v[i] << " ";
            cout <<'\n';

        }
        else cout << -1 << '\n';
    }

}
int main()
{
     setup();

     int tt;
     cin >> tt;
     while(tt--) code();

     

}