#include<bits/stdc++.h>

using namespace std;
int main()
{
    int marks;;
    cin>>marks;
    if(marks>=80&&marks<100){
        cout<<"A"<<endl;
    }
    if(marks>=60&&marks<80){
        cout<<"B"<<endl;
    }
    if(marks>=50&&marks<60){
        cout<<"C"<<endl;
    }
    if(marks>=45&&marks<50){
        cout<<"D"<<endl;
    }
    if(marks>=25&&marks<45){
        cout<<"E"<<endl;
    }
    if(marks<25){
        cout<<"F"<<endl;
    }


    return 0;
}