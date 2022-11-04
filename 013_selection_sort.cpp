#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
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
    selectionSort(arr,size);
    cout<<"Array before sorting - ";
    printArray(arr,size);
    return 0;
}