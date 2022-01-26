#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,one=0,two=0,three=0;
    cin>>t;
    int arr[t+1];
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=1;i<=t;i++) {
            cin>>arr[i];
            if(arr[i]==1)
            {
                one++;
                a.push_back(i);
            }
           else if(arr[i]==2)
            {
                two++;
                b.push_back(i);
            }
          else  if(arr[i]==3)
            {
                three++;
                c.push_back(i);
            }
    }
    int k=min(one,min(two,three));
    cout<<k<<endl;
    if(k>0) for(int i=0;i<k;i++) cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
}