#include <iostream>
using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; ++i) {
//         // Prints the first two terms.
//         if(i == 1) {
//             cout <<"this"<< t1 << ", ";
//             continue;
//         }
//         if(i == 2) {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
      
//         cout <<"yo"<< nextTerm << ", ";
        
//     }
//     return 0;
// }

int main()
{
int j, t1 = 0, t2 = 1, nextTerm = 0, i;
cout << "Enter the n value: ";
cin >> j;
  
if(j == 0 || j == 1) 
   cout << j;
  
else
  nextTerm = t1 + t2;
  for (i = 3; i <= j; ++i){
  t1 = t2;
  t2 = nextTerm;
  nextTerm = t1 + t2;
    }
  
cout << t2;
}