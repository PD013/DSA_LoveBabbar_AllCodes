// #include <iostream>
// using namespace std;

// int main() {
  
//   float a;
//   cin>>a;

//   float Celcius = ((a-32)*5)/9;
//   cout<<"Celcius form of given farenhite is "<< Celcius << endl;
  
// }

#include <iostream>
using namespace std;
// To check wether number is prime or not 
int main() {
  int a;
  cin>>a;

  int num=2;

  while(num<a){
    // divide hogaya,Not prime
    if(a%num==0){
      cout<<"NOT Prime for "<< num <<endl;
    }
    else{
      cout<<"Prime For "<<num<<endl;
    }
    num=num+1;
  } 
}