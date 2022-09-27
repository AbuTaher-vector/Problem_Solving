#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    long long int a;
    cin>>a;
    while(1)
    {
        long long int k=a;
        int x=0,y=0;
        while(k)
        {
            int b=k%10;
            k/=10;
            if(b>0)
            {
                x++;
                if(a%b==0) y++;
            }

        }
        if(x==y)
        {
            cout<<a<<'\n';
            break;
        }
        a++;
    }
}
int main() {
     setup();
    
     int tt;
     cin>>tt;
     while(tt--) code();
}