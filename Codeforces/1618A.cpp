#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn a=3,b=5;
    vector<nn>x(a),y(b);
    for(nn i=0;i<2;i++) cin>>x[i];
        for(nn i=0;i<b;i++) cin>>y[i];
            for(nn i=0;i<2;i++) cout<<x[i]<<" ";
                for(nn i=0;i<b;i++) 
                    {
                        if(x[0]+x[1]+y[i]==y[4])
                        {
                            cout<<y[i]<<nl;
                            break;
                        }
                    }
                


}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}