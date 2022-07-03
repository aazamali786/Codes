#include<iostream>
using namespace std;
bool isSafe(int **arr,int x,int y,int n){
    //for same row
    for(int row=0;row<x;row++){
    if(arr[row][y]==1){
        return false;
    }
    }
    //for diagonal
    int row=x;
    int col=y;
    while(x>=0 && col>=0){
        if(arr[x][col]==1){
            return false;
        }
        row--;
        col--;
    }
      while(row>=0 && col<y){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}
int nqueen(int **chess,int x,int n ){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(chess,x,col,n)){
            chess[x][col]=1;
        }
        if(nqueen(chess,x+1,n)){
            return true;
        }
        chess[x][col]=0;
    }
}
int main(){
    int l,m;
    cin>>l>>m;
    int **chess[l][m];
    int n;
    cin>>n;
    if(nqueen(**chess,0,n)){
        for(int i=0;i<=l;i++){
            for(int j=0;j<=m;j++){
                cout<<chess[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}