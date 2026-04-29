#include<iostream>
using namespace std;
int tiling(int n){
    if(n==0 || n==1){
        return 1;
    } 
    return tiling(n-1)+tiling(n-2);
}
int main(){
    int n=3;
    cout<<"The number of ways to tile the floor is: "<<tiling(3)<<endl;
    return 0;
}