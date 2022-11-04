#include <iostream>
using namespace std;
int main(){
    int i,a,b;
    cin>>a>>b;
    for(i=0;i<=b;i++){
        if(i%2!=0){
            cout<<a<<" "<<"x "<<i<<" "<<"="<<" "<<a*i<<endl;
        }
    }
}