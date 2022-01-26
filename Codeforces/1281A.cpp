#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt;
    cin>>tt;
    while(tt--)
    {
        ss s;
        cin>>s;
        for(nn i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='o' && s[i-1]=='p')
            {
                cout<<"FILIPINO"<<endl;
                break;
            }
            else if(s[i]=='u' && s[i-1]=='s' && s[i-2]=='e' && s[i-3]=='d')
            {
                cout<<"JAPANESE"<<endl;
                break;
            }
            else if(s[i]=='u' && s[i-1]=='s' && s[i-2]=='a' && s[i-3]=='m')
            {
                cout<<"JAPANESE"<<endl;
                break;
            }
            else if(s[i]=='a' && s[i-1]=='d' && s[i-2]=='i' && s[i-3]=='n' && s[i-4]=='m')
            {
                cout<<"KOREAN"<<endl;
                break;
            }
        }
    }


}
