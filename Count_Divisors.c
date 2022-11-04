#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,a,b,c,d=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++){
        if(i%c==0){
            d=d+1;
        }

    }
    cout<<d;
    return 0;
}