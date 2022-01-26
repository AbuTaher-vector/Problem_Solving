#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn n,k;
    cin>>n>>k;
    vector<pair<nn,nn>>v(n);
    for(nn i=0;i<n;i++)
    {
      cin>>v[i].first;
      v[i].second=i;
    }
    k--;
    sort(v.begin(),v.end());
    for(nn i=0;i<v.size()-1;i++) if(v[i].second+1!=v[i+1].second) k--;
    cout<<(k<0?"No":"Yes")<<"\n";
    

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}