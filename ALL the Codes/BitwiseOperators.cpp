#include <iostream>
using namespace std;
int main() {
  int a = 4;
  int b = 6;
  cout<<" a&b = "<< (a&b) << endl;
  cout<<" a|b = "<< (a|b) << endl;
  cout<<" ~a = " << (~a)  << endl;
  cout<<" a^b = "<< (a^b) <<endl;

  cout<< (17>>1) << endl;
  cout<< (17>>2) << endl;
  cout<< (19<<1) << endl;
  cout<< (21<<2) << endl;

  int i = 7;
  // Print = 7 and i changes to 8
  cout << (i++) << endl ;

  // i changes to 9 then Print 9 
  cout << (++i) << endl ;

  //Print = 9 then decreases value i=8
  cout << (i--) << endl ;

  //decreases value i=7 and then print = 7
  cout << (--i) << endl ;
  
}