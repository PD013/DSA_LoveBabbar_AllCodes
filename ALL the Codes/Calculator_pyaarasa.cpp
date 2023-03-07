#include <iostream>
using namespace std;

int main() {
  int a,b;
  char op;
  cout <<"Enter the Number";
  cin >> a >> b ;
  cout <<"Enter the operator";
  cin >> op;
  
  switch(op){
    case '+' : cout <<(a+b)<<endl;
         break;
    case '-' : cout <<(a-b)<<endl;
         break;
    case '/' : cout <<(a/b)<<endl;
         break;
    case '*' : cout <<(a*b)<<endl;
          break;
    case '%' : cout <<(a%b)<<endl;
          break;
    default:cout <<"Please enter a valid operation" <<endl;
  }

  

  
}