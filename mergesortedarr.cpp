#include<iostream>
using namespace std;
int mergesort(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
            
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void print(int arr[],int n){
     for(int h=0;h<n;h++){
    cout<<arr[h]<<" ";
   }
}
int main(){
    int arr1[5]={3,5,7,9,13};
    int arr2[4]={4,6,8,10};
    int arr3[9]={0};
    mergesort(arr1,5,arr2,4,arr3);
    print(arr3,9);
    return 0;
}