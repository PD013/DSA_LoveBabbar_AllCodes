#include <iostream>
using namespace std;

// Print all the elements in array 
void printarry(int arr[],int n){
  for(int i =0; i<n;i++){
    cout << arr[i] << " ";
    }
  cout << endl;
  }

void reverse(int arr[],int num){
  int start = 0;
  int end = num -1;

  while(start <= end){
    swap(arr[start],arr[end]);
    start ++;
    end -- ; 
  }  
}

void alterswap(int arr[],int num){
  int start = 0;
  int end = 1;

  while(end < num){
    swap(arr[start],arr[end]);
    start = start+2;
    end = end +2;
  }
}



int main() {

  int num;
  cout << "Enter the length of array : "; 
  cin >>num;

  int arry[100]; //= {1,3,5,32,-1,23,42};
  cout << "Enter digits in the array : " ;
  
  for(int i=0;i<num;i++){
    cin >> arry[i];
  }
  
  reverse(arry,num);
  cout <<"This is reverse of array : " <<endl;
  printarry(arry,num);

  alterswap(arry,num);
  cout <<"This is alternate swap of array : " <<endl;
  printarry(arry,num);
  
  
  
  }