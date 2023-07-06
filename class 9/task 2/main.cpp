#include<bits/stdc++.h>

using namespace std;

int main() {
  const double n = 3.14159;
  double r,ans;
  cin>>r;
  ans = n*pow(r,2);
  
  cout<<fixed<<setprecision(4);
  cout<<"A="<<ans<<endl;
  
  return 0;
}