#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn a,b;
    cin>>a>>b;
    vector<nn>x(a),y(b);
    for(nn i=0;i<a;i++) cin>>x[i];
        for(nn i=0;i<b;i++) cin>>y[i];

            for(nn i=0;i<b;i++)
            {
                for(nn j=0;j<a;j++)
                {
                    if(y[i]==x[j])
                    {
                        x[j]=0,y[i]=0;
                        break;
                    }
                }
            }
            sort(y.begin(),y.end());
            reverse(y.begin(),y.end());
            if(y[0]!=0) cout<<"No"<<nl;
            else cout<<"Yes"<<nl;

}