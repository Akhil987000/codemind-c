#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float d=0;
    for(int i=1;i<=n;i++){
        d=d+(1.0/i);
        
    }
    printf("%.2f",d);
}                 