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
       long long int n;
       cin>>n;
       int lcm=2;
       for(int i=3;i<=10;i++) lcm=lcm*i/__gcd(lcm,i);
         cout<<n/lcm<<"\n";
}
