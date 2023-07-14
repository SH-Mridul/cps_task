#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  if(n<6){
    cout<<1<<endl;
  }else{
    cout<<(n/6)+1<<endl;
  }
  return 0;
}

