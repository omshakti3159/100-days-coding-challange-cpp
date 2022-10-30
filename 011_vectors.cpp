#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector <int> arr(5,2);
    arr.push_back(7);
    arr.push_back(8);
    arr.pop_back();
    cout<< arr.size()<<"  ";
    cout<< arr.capacity()<< endl;
    for( int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    return 0;
 }