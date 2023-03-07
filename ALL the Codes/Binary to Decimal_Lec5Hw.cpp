#include <iostream>
#include<math.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  unsigned long long int i = 0, ans = 0;
  // For negative number 
  if (n < 0) {
    // pow(2,16) is taken becaus 32 cannot be taken 
    n = pow(2, 16) + n;
    // Here above +n is working as negative bcz of value and 2,16 means 16Digits are one and 
    }
  // cout << n << endl;
  while(n) {
    int lastBit = n & 1;
    ans = (pow(10,i) * lastBit) + ans;
    n = n >> 1;
    i++;
    // cout << ans << endl;
    }
  cout << ans << endl;



  // ans = ans;
  


cout << "My Answer is " << ans << endl;

  }

// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {

//   int n;
//   cin>>n;
//   int ans = 0;
//   int i=0;
//   int bit;
//      while(n!=0){
//       int bit = n&1;
      // ans=(bit  * pow(10,i)) + ans;

//       n = n >> 1;
//       i++;
//     ans = ans +1;
    
//   }cout << "My Answer is " << bit << endl;
// }
  


