#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubsets(string str, string subsets){
    if(str.size()==0){
        cout<<subsets<<endl;
        return;
    }
    char ch=str[0];;
    // for choice of yes
    printSubsets(str.substr(1, str.size()-1), subsets+ch);
    // for choice of no
    printSubsets(str.substr(1, str.size()-1), subsets);

}
int main(){
    string str="abc";
    printSubsets(str, "");
    return 0;
}