#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int i=1;
  int sum=0;

  while(i<=n) {
    sum=sum+i;
    i=i+1;
  }
  
cout<<"This is the sum of n numbers "<<sum<<endl;
  
}
// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while(i<=n) {
//         sum = sum + i;
//         i = i + 1;
//     }

//     cout<< "value of sum is "<<sum<<endl;

// }