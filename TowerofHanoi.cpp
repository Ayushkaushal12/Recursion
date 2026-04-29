#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source, char helper, char destination){
    if(n==1){
        cout<<"Move 1 from "<<source<<" to "<<destination<<endl;    
        return;
    }
    towerOfHanoi(n-1, source, destination, helper);
    cout<<"Move "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, helper, source, destination);
}

int main(){

    int n=3;
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
