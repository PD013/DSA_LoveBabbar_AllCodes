#include <iostream>
#include<math.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  unsigned long long int i = 0, ans = 0;
  
  while(n !=0) {
    
    int digit = n % 10;
    
    if(digit == 1){
        ans = (pow(2,i) + ans); 
    }
    n = n/10;
    i++;
    }
  // ans = ans;
cout << "My Answer is " << ans << endl;

  }