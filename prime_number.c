#include <iostream>
using namespace std;
int main(){
    int a,i,s=0;
    cin>>a;
    for(i=2;i<a;i++){
        if(a%i==0){
            s=s+1;
        }}
        if(s==0){
            printf("prime");
        }
        else{
        printf("not a prime");
        }
    return 0;
}