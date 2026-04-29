#include<iostream>
#include<vector>
using namespace std;
int firstoccur(const vector<int>& vec, int n, int key, int i = 0){
    if(i == n){
        return -1;
    }
    if(vec[i] == key){
        return i;
    }
    return firstoccur(vec, n, key, i+1);
}
int main(){
    vector<int> vec={1,2,2,3,3,4,5};
    cout<<firstoccur(vec, vec.size(), 3)<<endl;
    return 0;
}