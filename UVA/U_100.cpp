#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn a,b;
     while((scanf("%d %d",&a,&b)) == 2)
    {
        nn mx=max(a,b),mn=min(a,b);
        vector<nn>v;
        for(nn i=mn;i<=mx;i++)
        {
                 nn cnt=1,k=i;

            while(k!=1)
            {
            if(k%2==0) k/=2;
            else k=k*3+1;
            cnt++;
            }
          v.push_back(cnt);
        }

       sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
      cout<<a<<" "<<b<<" "<<v[0]<<endl;

    }

}