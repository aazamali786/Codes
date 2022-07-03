#include<iostream>
using namespace std;
int sqrtint(int n){
    int start=0, end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
        int square=mid*mid;
    if(square==n){
        return mid;
    }
    if(square<n){
        ans=mid;
        start=mid+1;
        
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
double precision(double prec,double n,int tempsol){
   double ans=tempsol;
    double factor=1;
    for(double i=0;i<prec;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
             ans=j;
        }
    }
            return ans;
}
int main(){
    double ar;
    cin>>ar;
    int tempsol=sqrtint(ar);
    cout<<"The integer only square root of number is: "<<sqrtint(ar)<<endl;
    cout<<"The precision square root of number is: "<<precision(3,ar,tempsol);
    return 0;
}