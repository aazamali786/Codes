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
int binarysearch(int arr[],int s,int l,int key){
    int start=s;
    int end=l;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
           return mid;
        }
        else{
            if(arr[mid]>key){
                end=mid-1;
            }
           else if(arr[mid]<key){
                start=mid+1;
            }
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int odd[]={2,5,-3,0};
    
    int size=4;
    int pivot=pivotindex(odd,size);
    int key=5;
    if(key>=odd[pivot] && key<=odd[size-1]){
        cout<<binarysearch(odd,pivot,size-1,key);
    }
    else{
        cout<<binarysearch(odd,0,pivot-1,key);
    }
   return 0;
}