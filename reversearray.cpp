#include<iostream>
#include<vector>
using namespace std;
vector <int> reverse(vector<int> v,int n){     // n is the index from where we have to start reversing the order
    int s=n+1;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>origv;
    origv.push_back(7);
    origv.push_back(3);
    origv.push_back(9);
    origv.push_back(5);
    origv.push_back(1);
    vector<int> ans=reverse(origv,2);
    print(ans);
    return 0;
}