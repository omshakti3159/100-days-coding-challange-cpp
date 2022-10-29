/**********************************
 * 
 * An array is a collection of elements of the
 * same type placed in contiguous memory locations.
 * 
 * <<<<<------- Array can be created like these approaches ------>>>>>>
 * 
 *  int arr[10]; 
 *  -- all values will get initialized with garbage values
 * 
 *  int arr2[10]={-1};
 *  int arr3[10]={1,2,3};
 *  -- if we assigne any value at the time of array creation rest of the left indexs
 *  get initialized with the 0. 
 * 
 *  int arr4[]={1,2,3};
 *  -- this will get the size as many elements we assign.
 * 
 *  string arr5[2]={"apple","banana"}
 *  -- this will create an array of character arrays
 * 
 * ********************************/



#include<iostream>
using namespace std;
int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int size = sizeof(arr) / sizeof(int);
   for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}