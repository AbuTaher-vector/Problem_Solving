
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin >> tt;
    while(tt--)
    {
        nn t;
        cin >> t;
        nn arr[t+1],ar[t+1]={0};
        for(nn i = 0; i < t; i++) cin>>arr[i];
            for(nn i = t-2; i >= 0; i--)
            {
                arr[i] = max(arr[i],arr[i+1]-1);

            }
            for(nn i = 0; i < t ; i++)
            { 
                if(arr[i] > 0) cout<<1<<" ";
                else cout << 0 << " ";

            } 
            cout<<endl;



    }

}
