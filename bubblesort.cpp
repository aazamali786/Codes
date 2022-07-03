#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int arr[],int n){
for(int i=1;i<n-1;i++){
    bool swapped=false; //for optimisation
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;  //for optimis.
        }
        else{
            continue;
        }
    }
    //for optimis.
    if(swapped==false){
        break;
    }
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}