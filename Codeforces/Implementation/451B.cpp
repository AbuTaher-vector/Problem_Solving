#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn n;
     cin>>n;
     vector<nn>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
        nn a,b,flag=0;
        for(nn i=0;i<n-1;i++)
        {
            if(v[i]>=v[i+1])
            {
                 nn x=i+1;
                 while(x+1<n && v[x+1]<=v[x]) x++;
                 reverse(v.begin()+i,v.begin()+x+1);
                 a=i;b=x;
                 flag++;
                 break;
            }
        }
       if(is_sorted(v.begin(),v.end()) && flag)
       {
        cout<<"yes"<<nl;
        cout<<++a<<" "<<++b<<nl;
       }
       else if(is_sorted(v.begin(),v.end()) && !flag)
       {
        cout<<"yes"<<nl;
        cout<<1<<" "<<1<<nl;

       }
       else cout<<"no"<<nl;
}