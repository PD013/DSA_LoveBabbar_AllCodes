#include <iostream>
#include <limits.h> //This is for INT_MIN and INT_MAX 
using namespace std;

// Print all the elements in array 
void printarry(int arr[],int n){
  
  cout<< "printing the array" <<endl;
  for(int i =0; i<n;i++){
    cout << arr[i] << " ";
    }
cout<< " printing DONE " << endl<< endl;
  }

// This is for Maximum
int getMax(int arr[],int n){

  int max = INT_MIN;
  
  for(int i = 0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}

// This is for Minimum Value
int getMin(int arr[],int n){

  int min = INT_MAX;
  
  for(int i = 0;i<n;i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  return min;
}

// This is for the sum of array
int sum(int arr[],int num){
  int sum = 0;
  for(int i=0;i<num;i++){
    sum = sum + arr[i];
    
  }
  return sum;
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
  printarry(arry,num);

  cout <<"This is the Max value in array : " << getMax(arry,num)<< endl;
  cout <<"This is the Mini value in array : "<< getMin(arry,num)<< endl;
  
  cout <<"This is the Sum of  value in array : "<< sum(arry,num)<< endl;
  }