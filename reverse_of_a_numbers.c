#include <iostream>
using namespace std;
int main(){
    int num,rev_num = 0;
    cin>>num;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num =int( num / 10);
    }
    cout<<rev_num;
}