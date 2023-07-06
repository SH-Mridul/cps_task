#include<bits/stdc++.h>

using namespace std;

int main() {
  double a,b;
  cin>>a>>b;
  
  double aWeight = a*3.5;
  double bWeight = b*7.5;
  double ans = (aWeight+bWeight)/(3.5+7.5);
  cout<<fixed<<setprecision(5);
  cout<<"MEDIA = "<<ans<<endl;
  
  return 0;
}