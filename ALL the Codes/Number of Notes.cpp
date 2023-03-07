#include <iostream>
using namespace std;

int main()
{
  int amount;
  cin>>amount;
  int hundreds = 0;
  int fifties = 0;
  int twenties = 0;
  int ones = 0;

  switch(1)
  {
      case 1: hundreds =amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee Notes ="<< hundreds <<endl;
              
         
      case 2: fifties =amount/50;
              amount = amount%50;
              cout<<"No of 50 Rupee Notes  ="<< fifties <<endl;
              

      case 3: twenties =amount/20;
              amount= amount%20;
              cout<<"No of 20 Rupee Notes  ="<< twenties <<endl;
               

      case 4: ones =amount/1;
              
              cout<<"No of 1 Rupee Notes ="<< ones <<endl; 
          
           }
        return 0;
}