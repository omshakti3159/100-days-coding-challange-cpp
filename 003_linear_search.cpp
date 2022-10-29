/*****************************************************************
 * 
 * Linear search is used to find the index of an element.
 * 
 * We start from first index and traverse through all the
 * elements one by one to find the desired key.
 * 
 * Time complexity of this algorithm is O(N).
 * 
******************************************************************/


#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
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
    int index = linearSearch(arr,size,key);
    if(index >= 0){
        cout<<key<<" found at index "<<index<<endl;
    }else{
        cout<<key<<" not found in array!"<<endl;
    }
    return 0;
}