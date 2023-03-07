#include <iostream>
using namespace std;

void arry(int arr[],int size){
  cout << endl;
  cout<< " printing the array" <<endl;
  for(int i =0; i<size;i++){
    cout << arr[i] << " ";
    }
cout<< " printing DONE " << endl;
  cout << endl;
}

int main() {
  
  int first[200] = {2,3,4,6};

  int second[100] = {0};

  int third[100] = {1,2};

  int fourth[100];

  // Can Iterate any value in array with fill_n
  fill_n(fourth, 100, 1); // here 100 is length of how many to initialize and 1 is what shall be coming 
  
  cout <<"This is First "<< first[5] << endl;
  cout <<"This is Second "<< second[15] << endl;

   // Finding Size of array 
  int fouthsize = sizeof(fourth)/sizeof(int);
  
  
  int n;
  cin >> n;
  
  arry (first,n);
  arry(second,n);
  arry(third,n);
  arry(fourth,n);
  cout <<"This is the size of Fourth" <<  fouthsize ;
}