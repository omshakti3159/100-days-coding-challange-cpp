/*****************************************************************
 * 
 * Binary search is used to find the index of an element in a sorted array.
 * 
 * it can be used on only on sorted arrays
 * 1- we first mark start and end
 * 2- we iterate while start < end
 * 3- we calculate mid by start + end / 2
 * 4- check that if arr[mid] == key then return the mid
 * 5- we check that 
 *      if arr[mid] < key then we updated the start with mid+1
 *      else we update the end with mid-1
 * 6- if we not found element in array we return -1 from the last line of function
 * 
 * Time complexity of this algorithm is O(Log N).
 * 
******************************************************************/


#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    while(start <= end){ 
        int mid =  ( start + end ) / 2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start =  mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    int size = sizeof(arr) / sizeof(int);
    cout<<"Enter a number>>"<<endl;
    cin>>key;
    int index = binarySearch(arr, 0, size-1, key);
    if(index >= 0){
        cout<<key<<" found at index "<<index<<endl;
    }else{
        cout<<key<<" not found in array!"<<endl;
    }
    return 0;
}