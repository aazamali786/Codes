#include<iostream>
using namespace std;
int pivotindex(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    cout<<"Pivot element index is: "<<pivotindex(arr,5);
    return 0;
}