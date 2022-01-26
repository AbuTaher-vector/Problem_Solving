#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int tt,index;
    cin>>ss>>tt;
    tt%=12;
    for(int i=0;i<12;i++)
    {
        if(ss==arr[i]) index=i;
    }
    tt+=index;
    tt%=12;
    cout<<arr[tt]<<endl;

}