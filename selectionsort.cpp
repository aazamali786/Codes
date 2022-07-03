#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
        
    }
    swap(arr[minindex],arr[i]);
}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}