#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    
    vector<int> v;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0 && j>=0){
        
       v.push_back((a[i]+b[j]+carry)%10);
        carry=(a[i]+b[j])/10;
        i--;
        j--;
    }
    while(i>=0){
        v.push_back((a[i]+carry)%10);
        carry=(a[i]+carry)/10;
        i--;
    }
    while(j>=0){
        v.push_back((b[j]+carry)%10);
        carry=(b[j]+carry)/10;
        j--;
    }
    while(carry!=0){
        v.push_back(carry%10);
        carry=carry/10;
    }
   return reverse(v);
}
int main(){
    vector<int>v1;
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(13);
      vector<int>v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    vector<int> ans=findArraySum(v1,5,v2,3);
    for(int h=0;h<ans.size();h++){
    cout<<ans[h]<<" ";
   }
    return 0;
}