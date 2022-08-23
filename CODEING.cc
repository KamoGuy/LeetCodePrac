
#include <iostream>
#include <string>
using namespace std;


int sumArray(int a[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum+= a[i];
  }
  return sum;
}

int main() {
  int iArray[] = {2, 5, 7, 3, 4, 15};

  int aSum = sumArray(iArray, 6);
  cout<<aSum<<endl; 

  if (aSum%2 ==0){
    cout << (aSum<<1)<<endl;
  }
  if (aSum%2 ==1){
    cout << (aSum>>1)<<endl;
  }
   
}
