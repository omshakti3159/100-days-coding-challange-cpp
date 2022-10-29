/***************************************************
 * 
 * we mark start and end index of array
 * while start < end
 *      swap(arr[start],arr[end])
 *      start += 1
 *      end -= 1
 * 
****************************************************/

#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
    
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);
    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}