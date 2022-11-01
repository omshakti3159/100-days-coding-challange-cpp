#include<iostream>
using namespace std;


void bubbleSort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {1,5,3,9,10,6,7,8};
    int size = sizeof(arr) / sizeof(int);

    cout<<"Array before sort -"<<endl;
    printArray(arr,size);
    bubbleSort(arr,size);
    cout<<"Array after sort -"<<endl;
    printArray(arr,size);
    ß
    return 0;
}