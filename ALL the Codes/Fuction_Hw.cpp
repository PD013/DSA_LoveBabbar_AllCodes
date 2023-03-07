#include <iostream>
using namespace std;

// To find the given AP of the n
int ap(int n){
  int ans = (3 * n)+7;
  return ans;
}

// // To find number of 1 bits in input number
unsigned int countSetBits(unsigned int a , unsigned int b)
{
    unsigned int count = 0;
    while (a) {
        count += a & 1;
        a >>= 1;
    }
    while (b) {
        count += b & 1;
        b >>= 1;
    }
    return count;
}

int fibonaci(int j){
  int t1 = 0, t2 = 1, nextTerm = 0, i;
  int k;

  switch (j) {
    case 0 : return 0;
    case 1 : return 1;
    default:
      nextTerm = t1 + t2;
      for (i = 3; i <= j; ++i){
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
      
  }return t2;
 
}
  }

int main() {
  int n,a,b;
  int j;
  
  int ans;
  int count;
  int k;
  
  
  cout <<"Enter the numbers n : ";
  cin >> n ;
  cout<< endl;

  cout <<"Enter the numbers a : ";
  cin >> a;
  cout<< endl;

  cout <<"Enter the numbers b : ";
  cin >> b;
  cout<< endl;

  cout <<"Enter the numbers j : ";
  cin >> j;
  cout<< endl;

  // Function Call of 1st
  ans = ap(n);

  // Funtion call of 2nd 
  count = countSetBits(a,b);

  // Function Call of 3rd 
  k = fibonaci(j);
  
  cout <<"1st answer : "<< ans <<endl;
  cout <<"2nd answer of no of bits : "<< count<<endl;
  cout <<"3rd answer of fibo : "<< k <<endl;
  };

