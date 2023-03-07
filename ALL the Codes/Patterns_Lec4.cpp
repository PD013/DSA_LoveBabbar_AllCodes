#include <iostream>
using namespace std;

// CODE_1
// int main() {
//   int n;
//   cin>>n;

//   int i =1;

//   // This is for printing 
//     // 3_Inp
//     // 3
//     // 32
//     // 321

//   while(i<=n){
//     int j =1;
    
//     while(j<=i){
//       cout<<n-j+1;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }


// CODE_2
// int main() {

//   int n;
//   cin>>n;

//   int i =1;

//   // This is for printing 
//     // 3_Inp
//     // 321
//     // 321
//     // 321
//   while(i<=n){
    
//     int j =1;
    
//     while(j<=n){
//       cout<<n-j+1;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }


// Code_3
// int main() {

//   int n;
//   cin>>n;

//   int i =1;
//   int count=1;
//   // This is for printing 
//     // 3_Inp
//     // 123
//     // 456
//     // 789
//   while(i<=n){
    
//          int j =1;
//          while(j<=n){
//              cout << count<<" ";
//              count=count + 1;
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// Code_4
// int main() {

//   int n;
//   cin>>n;

//   int i =1;
//   int count=1;
//   // This is for printing 
//     // 4_Inp
//     // *
//     // **
//     // ***
//     // ****
//   while(i<=n){
    
//          int j =1;
//          while(j<=i){
//              cout <<"*";
             
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// Code_5
// int main() {

//   int n;
//   cin>>n;

//   int i =1;
  
//   // This is for printing 
//     // 4_Inp
//     // 1
//     // 12
//     // 123
//     // 1234
//   while(i<=n){
    
//          int j =1;
//          while(j<=i){
//              cout <<j;
             
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// CODE_6
//   // This is for printing 
//     // 4_Inp
//     // 1
//     // 2 3
//     // 4 5 6
//     // 7 8 9 10 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   int count=1;

//   while(i<=n){
//          int j =1;
//          while(j<=i){
//              cout << count<<" ";
//              count=count+1 ;
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// CODE_7
//   // This is for printing 
//     // 4_Inp
//     // 1
//     // 2 3
//     // 3 4 5 
//     // 4 5 6 7 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n){
//          int j =1;
//          int value=i;
//          while(j<=i){
//              cout << value<<" ";
//              value=value+1 ;
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// CODE_8
// This is for printing (another Method)
    // 4_Inp
    // 1 2
    // 2 3 4
    // 3 4 5 6
    // 4 5 6 7 8
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
//          int j =i;
//          while(j<=i*2){
//              cout << j<<" ";
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }



// CODE_9
// This is for printing 
    // 4_Inp
    // 1
    // 2 1
    // 3 2 1 
    // 4 3 2 1 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
//          int j =1;
//          while(j<=i){
//              cout <<(i-j+1) <<" ";
//              j=j+1;
//           }
//         cout<<endl;
//         i=i+1;
//   }
// }


// CODE_10
// This is for printing 
    // 3_Inp
    // A A A
    // B B B
    // C C C  
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   // char b= 65;
//   while(i<=n){
//          int j =1;
//          while(j<=n){
//              char ch ='A'+i-1;
//              cout << ch <<" ";
//              j=j+1;
//           }
//         cout<<endl;
//         // b = b+1;
//         i=i+1;
//   }
// }

// CODE_11
// This is for printing 
    // 3_Inp
    // A B C
    // A B C
    // A B C 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   // char b= 65;
//   while(i<=n){
//          int j =1;
//          while(j<=n){
//              char ch ='A'+j-1;
//              cout << ch <<" ";
//              j=j+1;
//           }
//         cout<<endl;
//         // b = b+1;
//         i=i+1;
//   }
// }


// CODE_12
// This is for printing 
    // 3_Inp
    // A B C
    // D E F
    // G H I
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   char ch = 'A';
//   while(i<=n){
//           int j =1;
//          while(j<=n){
//              cout << ch <<" ";
//              ch=ch+1;
//              j=j+1;
//           }
//         cout<<endl;
//         // b = b+1;
//         i=i+1;
//   }
// }


// CODE_13
// This is for printing 
    // 3_Inp
    // A 
    // B B
    // C C C
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   // char ch ='A';
//   while(i<=n){
//         int j =1;
//         while(j<=i){
//           char ch = 'A'+i-1;
//           cout << ch <<" ";
//           j=j+1;
//           }
//         // ch=ch+1;
//         cout<<endl;
//         i=i+1;
//   }
// }


// CODE_14
// This is for printing 
    // 4 _Inp
    // A 
    // B C 
    // D E F 
    // G H I J
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   char ch = 'A';
//   while(i<=n){
//           int j =1;
//          while(j<=i){
//              cout << ch <<" ";
//              ch=ch+1;
//              j=j+1;
//           }
//         cout<<endl;
//         // b = b+1;
//         i=i+1;
//   }
// }


// CODE_15
// This is for printing 
    // 4 _Inp
    // A 
    // B C 
    // C D E  
    // D E F G 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
        
//         int j =1;
//         while(j<=i){
//              char ch ='A'+i+j-2;
//              cout << ch <<" ";
//              j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//   }
// }

// CODE_16
// This is for printing 
    // 4 _Inp
    // D 
    // C D 
    // B C D   
    // A B C D 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
        
//         int j =1;
//         char start ='A'+n-i;
//         while(j<=i){
//              // My method
//              // char ch ='D'-i+j;
//              cout << start <<" ";
//              start=start+1;
//              j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//   }
// }

// CODE_17
// This is for printing (Another method )
    // 4 _Inp
    // A B C
    // B C D 
    // C D E  
    // D E F  
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
         
//     int j =1;
//     char ch ='A'+i-1;
//       while(j<=n){
//           cout << ch <<" ";
//           ch=ch+1;
//           j=j+1;
//         }
      
//       cout<<endl;
//       i=i+1;
//   }
// }


// CODE_18
// This is for printing 
    // 4 _Inp
    //   *(Here there are 3 spaces)
    //  ** (Here 2 spaces)
    // *** (Here 1 space) 
    //**** (Here none ) 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n){
//     int space =n-i; 
//       while(space){
//           cout <<" ";
//           space=space-1;
//         }
//     int j=1;
//       while(j<=i){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// CODE_19
// This is for printing 
    // 4 _Inp
    //xxxx
    //xxx 
    //xx 
    //x 
// int main() {
//   int n;
//   cin>>n;
//   int i =1;
  
//   while(i<=n){
//     int star=n-i+1;
//     int j=1;
//     while(j<=star){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
    
//   }
// }


// CODE_20
// This is for printing 
    // 4 _Inp
    //xxxx(Here none ) 
    // xxx(Here 1 space)
    //  xx(Here 2 spaces)
    //   x(Here there are 3 spaces)
// int main() {
// int n;
// cin>>n;
// int i =1;
//   while(i<=n){
//     int star=n-i+1;
//     int j=1;
//     int space=i-1;
//       while(space){
//         cout<<" ";
//         space=space-1;
//       }
//       while(j<=star){
//         cout<<"*";
//         j=j+1;
//       }
//     cout<<endl;
//     i=i+1;
//   }
// }


// CODE_21 ((HW))
// This is for printing 
    // 4 _Inp
    //1111(Here none ) 
    // 222(Here 1 space)
    //  33(Here 2 spaces)
    //   4(Here there are 3 spaces)
// int main() {
// int n;
// int star=4;
// cin>>n;
// int i =1;
//   while(i<=n){
//     int j=1;
//     int space=i-1;
//       while(space){
//         cout<<" ";
//         space=space-1;
//       }
//       while(j<=star){
//         cout<<i;
//         j=j+1;
//       }
//     cout<<endl;
//     i=i+1;
//     star=star-1;
//   }
// }


// CODE_22 ((HW))
// This is for printing 
    // 4 _Inp
    //4444(Here none ) 
    // 333(Here 1 space)
    //  22(Here 2 spaces)
    //   1(Here there are 3 spaces)
// int main() {
// int n;
// int star=4;
// cin>>n;
// int i =1;
//   while(i<=n){
//     int j=1;
//     int space=i-1;
//       while(space){
//         cout<<" ";
//         space=space-1;
//       }
//       while(j<=star){
//         cout<<star;
//         j=j+1;
//       }
//     cout<<endl;
//     i=i+1;
//     star=star-1;
//   }
// }


// CODE_22 ((HW))
// This is for printing 
    // 4 _Inp
    //   1 
    //  22
    // 333
    //4444
// int main() {
// int n;
// cin>>n;
// int i =1;
//   while(i<=n){
//     int j=1;
//     int space=n-i;
//       while(space){
//         cout<<" ";
//         space=space-1;
//       }
//       while(j<=i){
//         cout<<i;
//         j=j+1;
//       }
//     i=i+1;
//     cout<<endl;
//   }
// }


// CODE_23 ((HW))  ((((((((((PENDINNG))))))))))
// This is for printing 
    // 4 _Inp
    //1234(Here none ) 
    // 234(Here 1 space)
    //  34(Here 2 spaces)
    //   4(Here there are 3 spaces)
// int main() {
// int n;
// cin>>n;
// int i =1;
//   while(i<=n){
//     int j=1;
//     int space=i-1;
//       while(space){
//         cout<<" ";
//         space=space-1;
//       }
//     int f=i;
//       while(f<=n){
//         cout<<f<<" ";
//         f=f+1;
//       }
//     i=i+1;
//     cout<<endl;
//   }
// }


// CODE_24 
// This is for printing 
    // 4 _Inp  ((((((((((PENDINNG))))))))))
//      1 
//    2 3
//  4 5 6
//7 8 9 10
// int main() {
// int n;
// cin>>n;
// int i= 1;
// int num = 1;
//   while(i <= n){
//       int j=1;
//       int space=1;
//       while(space <= n - i){
//           cout<<" ";
//           space=space+1;
//          }
//       while(j <= i){
//           cout<<num<<" ";
//           num=num+1;
//           j= j + 1;
//        }
//        i= i + 1;
//        cout<<endl; 
//     }
//    return 0;
//   }


// CODE_25
// This is for printing 
//     4 _Inp  
//      1  
//    1 2 1
//  1 2 3 2 1
//1 2 3 4 3 2 1
// int main() 
// {
  
// int n;
// cin>>n;
  
// int row= 1;
  
//   while(row<=n){
      
//      // Print 1st Triangle
//      int space=n-row;
//      while(space){
//      cout<<" ";
//      space = space - 1;
//      }
//   // Print 2nd Triangle
//      int j = 1;
//      while(j <= row){
//        cout<<j;
//        j = j+1;
//      }


//   // Print 3rd Triangle
//     int start = row - 1;
//     while(start){
//       cout<<start;
//       start = start - 1;
//     }
    
    
//     cout<<endl;
//     row = row + 1;
//   }
// }


// CODE_26
// This is for printing ((Dabbang Pattern))
//     5 _Inp  
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
int main() 
{
  
int n;
cin>>n;
  
int row= 1;
  
  while(row<=n){
      
     // Print 1st Triangle
     int num=1;
     int k =5-row+1;
     while(k){
     cout<<num<<" ";
     num = num + 1;
     k = k-1;
     }
     
  // Print 2nd Triangle
     int j = row-1;
     while(j){
       cout<<"* * ";
       j = j-1;
     }
    


  // // Print 3rd Triangle
     int num2=5;
     int F =5-row+1;
     while(F){
     cout<<num2<<" ";
     num2 = num2 - 1;
     F = F-1;
     }
    
    
    cout<<endl;
    row = row + 1;
  }
}