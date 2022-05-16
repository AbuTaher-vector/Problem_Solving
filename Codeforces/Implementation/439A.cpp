#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}

int main()
{
        setup();
        nn n,d;
        cin>>n>>d;
        vector<nn>v(n);
        for(nn i=0;i<n;i++) cin>>v[i];
            nn mx=0,i,cnt=0;
            for(i=0;i<n;i++)
            {
                mx+=v[i];
                if(mx>d) break;
                
                if(mx+5<=d) cnt++;
                if(mx+10<=d) cnt++;
                mx+=10;

            }
            if(mx<d) cnt+=(d-mx)/5;
            if(i==n) cout<<cnt<<nl;
            else cout<<-1<<nl;
}