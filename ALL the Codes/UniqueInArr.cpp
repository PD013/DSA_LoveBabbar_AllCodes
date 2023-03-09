#include <iostream>
using namespace std;
int main() {

    int size = 7;
  int arr[7] = {1,4,3,3,2,4,2};
  int ans =0;
  for(int i=0;i<size;i++){
    ans = ans^arr[i];
  
  }
  cout <<"This is the Final Output : "<< ans <<endl;
}