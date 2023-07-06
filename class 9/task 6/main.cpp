#include<bits/stdc++.h>

using namespace std;

int main() {
  double a,b,c;
  cin>>a>>b>>c;
  
  double aWeight = a*2;
  double bWeight = b*3;
  double cWeight = c*5;
  double ans = (aWeight+bWeight+cWeight)/(2+3+5);
  cout<<fixed<<setprecision(1);
  cout<<"MEDIA = "<<ans<<endl;
  
  return 0;
}