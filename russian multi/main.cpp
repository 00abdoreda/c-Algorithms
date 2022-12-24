#include <iostream>
using namespace std;
//Russian multi
int russian(int a,int b){
    int x=a,y=b,z=0;
    while(x>0){
        if(x%2==1){
            z+=y;
        }
        y=y<<1;
        x=x>>1;
    }
    return z;
}
int main() {
cout<< russian(20,26);
}
