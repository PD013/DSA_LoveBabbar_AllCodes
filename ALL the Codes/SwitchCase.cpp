#include <iostream>
using namespace std;

// int main() {
//   int num ;
//   cin >> num;
//   int i = 1;
//   cout<<endl;
//   // Infinite loop is going on
//   while(i>0){
//      switch( num ){
//         case 1: cout<<"first"<<endl;
//           // Using Exit to get out of the whole 
//               // exit(0);
//         case 2: cout<<"Second" << endl;
//               // abort();
//         case 3: cout<<"Third" << endl;
//               continue;
//         default: cout<<"Its default case" << endl;
//               // exit(0);
      
//   } 
//     }
//   cout<<endl;
// }


int main(void) {
  int num ;
  cin >> num;
  int i = 1;
  cout<<endl;
  
    switch( num ){
      case 1: cout<<"first"<<endl;
          // Using Exit to get out of the whole 
              // exit(0);
      case 2: cout<<"Second" << endl;
              // abort();
      case 3: cout<<"Third" << endl;
              break;
      default: cout<<"Its default case" << endl;
              exit(0);
  }
  cout<<endl;
}