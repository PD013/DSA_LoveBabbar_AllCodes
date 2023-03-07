#include <iostream>
using namespace std;

int main() {
  // Map with Ascii values
  char user_input;
  cin >> user_input;

  int ascii = user_input;

  if (ascii >= 97 && ascii <= 122) {
    cout << "This Is lower case" << endl;
  } else if (ascii >= 65 && ascii <= 90) {
    cout << "This is upper case" << endl;
  } else if(ascii >=47 && ascii<=57) {
    cout << "This is Numeric" << endl;
  } else{
    cout<<"This is not numeric and also not an alphabet"<<endl;
  }
}
