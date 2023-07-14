#include<bits/stdc++.h>
using namespace std;

int main() {
  int p,q,y;
  cin>>p>>q>>y;
  int inWeek = (p*5)+(q*2);
  int total = inWeek*(52*y);
  cout<<total<<endl;
  return 0;
}

