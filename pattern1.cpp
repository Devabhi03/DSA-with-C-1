/* requires nested loop
1) outter loop usually for rows
2) inner loop usually for columns and some how connect them to outter loop
3) print the paterrn inside inner loop
4) observe symmtery (applys to some cases only)

lets take an example -
    ****
    ****
    ****
    ****
*/

#include <iostream>

using namespace std;
int main(){
    for (int i =0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}