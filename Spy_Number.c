#include <iostream>
using namespace std;
int main(){
    int n,m,s=0,z=1;
    cin>>n;
    while(n!=0){
    m=n%10;
    n=n/10;
    s=s+m;
    z=z*m;
    }
    if(s==z){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
    return 0;
}