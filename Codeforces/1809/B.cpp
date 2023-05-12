#include "bits/stdc++.h"
using namespace std;
void code(){
  long long int n;
  cin>>n;
  long long int k=sqrt(n);
  if(k*k!=n) k++;
  cout<<k-1<<"\n";
}
int main(){
  int tt;
  cin>>tt;
  while(tt--) code();
}