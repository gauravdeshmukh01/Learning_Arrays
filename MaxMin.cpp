
#include <iostream>
#include<limits.h> 
using namespace std;

 int main(){
 
  int arr[] = {1,2,3,4,5};
  int min = INT_MAX;

  for(int i = 0 ; i < 5 ; i++){
     if(arr[i]< min){
      min = arr[i];
     }
    }
    cout << " Minimum element is : " << min ;
  }
