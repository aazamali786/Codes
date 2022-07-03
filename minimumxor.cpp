#include<iostream>
#include <algorithm>
using namespace std;
int minimum(int arr[],int n){
    sort(arr,arr+n);
    int minxor=__INT_MAX__;
    for(int i=0;i<n-1;i++){
       int val=arr[i]^arr[i+1];
       minxor=min(minxor,val);
        }
        return minxor;
    }
int main(){
    int ar[4]={6,8,3,4};
    cout<<minimum(ar,4);
    return 0;
}




