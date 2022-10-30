#include<iostream>
using namespace std;

int maxSumOfSubarrays(int arr[],int n){
    int maxSum = 0;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}

int main(){
    int arr[] = {1,2,3,-4,5,-6,7};
    int size = sizeof(arr) / sizeof(int);
    cout<< "\nMax subarray sum is : "<< maxSumOfSubarrays(arr,size)<<endl;
    return 0;
}