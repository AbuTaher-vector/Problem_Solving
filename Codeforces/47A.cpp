#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn arr[33]={0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528};
       nn tt;
   cin>>tt;
    for(nn i=0;i<33;i++)
    {
        if(arr[i]==tt)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(arr[i]>tt)
        {
             cout<<"NO"<<endl;
            break;
        }

    }


}