#include<iostream>
using namespace std;
bool checkSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }

    return checkSorted(arr,n,i+1);

}

int main(){
    int arr1[]={1,2,43,4,5};
    int arr2[]={1,2,3,4,5};
    cout<<checkSorted(arr1,5,0)<<endl;
    cout<<checkSorted(arr2,5,0)<<endl;
    return 0;
}