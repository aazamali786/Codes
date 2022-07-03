#include<iostream>
using namespace std;
bool ispossible(int A[],int N,int M,int mid){
    int studentcount=1;
    int pagecount=0;
    for(int i=0;i<N;i++){
        if(pagecount+A[i]<=mid){
            pagecount+=A[i];
        }
        else{
            studentcount++;
           if(studentcount>M || A[i]>mid){
                return false;
           }
                pagecount=A[i];
            }
    }
}
int findPages(int A[], int N, int M) 
    {
       int start=0;
        int sum=0;
       for(int i=0;i<N;i++){
           sum+=A[i];
       }
        int ans;
       int end=sum;
       int mid=start+(end-start)/2;
       while(start<=end){
           if(ispossible(A,N,M,mid)){
               end=mid-1;
               ans=mid;
           }
           else{
               start=mid+1;
           }
           mid=start+(end-start)/2;
       }
       return ans;
    }
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<findPages(arr,n,m);
}