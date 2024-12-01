#include <iostream>
using namespace std;

void addFive(int x);
int main(){
    addFive(5);
    return 0;
}
void addFive(int x){
    x = x + 5;
    cout << x ;
}