/*
now we have to print pattern like this -

* * * * *
* * * *
* * *
* *
*

*/


#include <iostream>

using namespace std;

void print1(int n){
for(int i =1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout <<  "* ";
    }
    cout << endl;
}
}
int main(){
    int n;
    cin>>n;
    print1(n);
}