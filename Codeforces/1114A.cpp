#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
        nn x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
        if(x>a) cout<<"NO"<<endl;
        else{
            int t=a+b-x;
            int tt=t-y;
            if(t>=y && tt+c>=z) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

}
