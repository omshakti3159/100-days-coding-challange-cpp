/**********************************
 * 
 * An array is always passed by reference to the function.
 * 
**********************************/



#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/********** we can also wirte like this pointer statement ************/

// void printArray(int *arr,int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/ sizeof(int);
    printArray(arr,size);
    return 0;
}