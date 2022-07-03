#include<iostream>
#include<vector>
using namespace std;
bool ispresent(int arr[2][3],int number){
    for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==number){
            return true;
        }
    }
    return false;
}
}

int main(){
int arr[2][3]={{3,4,7},{33,27,42}};

for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int number;
cin>>number;
if(ispresent(arr,number)){
    cout<<"Present";
}
else{
    cout<<"Not Found";
}
return 0;
}