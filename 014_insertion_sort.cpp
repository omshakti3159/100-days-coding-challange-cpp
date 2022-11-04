#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(key < arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,4,2,6,3,10,9,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Array before sorting - ";
    printArray(arr,size);
    insertionSort(arr,size);
    cout<<"Array after sorting - ";
    printArray(arr,size);
    return 0;
}