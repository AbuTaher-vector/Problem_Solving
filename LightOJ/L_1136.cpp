#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

int cnt(int n)
{
    if(n == 0)return 0;
    int res = (n/3)*2;
    if(n%3 == 2)res += 1;
    return res;
}

int main()
{
    int tt;
    cin >> tt;
    for(nn i = 1; i <= tt; i++){
        nn a,b;
        cin >> a >> b;
        cout << "Case "<<i << ": "<< cnt(b) -  cnt(a - 1) <<nl;
    }
}