#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int z,y,x;
    z=pow(a,b);
    y=z%c;
    cout<<y;
    return 0;
}