#include<iostream>
using namespace std;

int maxSumOfSubarrays(int arr[],int n){
    int prefixSums[n];
    prefixSums[0] = arr[0];
    for(int i=1; i<n; i++){
        prefixSums[i] = prefixSums[i-1] + arr[i];
    }

    int maxSum = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int currSum = i>0 ? prefixSums[j] - prefixSums[i-1] : prefixSums[j];
            maxSum = max(maxSum,currSum);
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {1,2,3,-4,5,-6,7};
    int size = sizeof(arr) / sizeof(int);
    cout<< "\nMax subarray sum is : "<< maxSumOfSubarrays(arr,size)<<endl;
    return 0;
}