// #include<iostream>
// using namespace std;
// void binStr(int n, string ans,int lastPlace){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     if(lastPlace!=1){
//         binStr(n-1, ans+"0", 0);
//         binStr(n-1, ans+"1", 1);
//     }else{
//          binStr(n-1,0,ans+"0");
//     }
// } 
// int main(){
//     string ans="";
//     binStr(3, 0, ans);

//     return 0;
// }

#include<iostream>
using namespace std;

void binStr(int n, string ans, int lastPlace){
    if(n == 0){
        cout << ans << endl;
        return;
    }
    binStr(n - 1, ans + "0", 0);

    if(lastPlace != 1){
        binStr(n - 1, ans + "1", 1);
    }
}

int main(){
    string ans = "";
    binStr(3, ans, 0);  // correct order
    return 0;
}