#include <iostream>
using namespace std;

int gcd_naive(int a, int b) {

  for (int d = min(a,b); d >= 1; d--) {
    if (a % d == 0 && b % d == 0) {
       return(d);
      }
    }
    return(1);
  }

int main() {
  long long int a, b,maxi,mini,i=0;
  std::cin >> a >> b;
  maxi=max(a,b);
  mini=min(a,b);
  if(maxi% mini==0){cout<<maxi;}
  else{a=maxi;

      while(a%mini!=0){a=a+maxi;}
      cout<<a;
      
  }
  return 0;
}
