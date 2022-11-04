#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    float z;
    z=sqrt(a);
    if(int(z)==z){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}