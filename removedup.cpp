#include<iostream>
using namespace std;
 void removeDuplicates(string str, string ans, int map [26]) {
     if(str.size() == 0){
     cout << "ans : " << ans << endl;
      return;
}

int mapIdx = (int) (str[0] - 'a');
char currentChar = str[0];
string remaining = str.substr(1);

     if(map [mapIdx]) { //duplicate
      removeDuplicates(remaining, ans, map);
} 
     else { //not duplicate
         map [mapIdx] = true;
       removeDuplicates(remaining, ans + currentChar, map);
 }
}
int main() {
    string str = "abcabc";
    int map [26] = {0};
    removeDuplicates(str, "", map);
    return 0;
}