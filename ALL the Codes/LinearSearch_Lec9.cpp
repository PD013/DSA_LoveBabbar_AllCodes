#include <iostream>
using namespace std;

bool search(int arr[], int size,int key){

  for(int i=0;i<size;i++){
     if (arr[i] == key){
       return 1;
     }
    }
  return 0;
  
}


int main() {

  int arr[10]={1,3,4,5,3,22,3,333,22,10};

  cout << "Enter the Element U want to search For : ";
  int key;
  cin >> key;

  bool found = search(arr,10,key);

  if(found){
    cout <<"The element is Present "<<endl;
  }
  else{
     cout <<"The element is Absent "<<endl;
    
  }
  
}