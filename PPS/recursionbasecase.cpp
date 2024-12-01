#include <iostream>
using namespace std;
int factorial(int n);

int main(){
    int a;
    cout << "Enter a value which you want to get factorial: ";
    cin >> a;
    factorial(a);
    return 0;
}

int factorial(int n){
    if(n == 0) return 0; //Base case
    return n*factorial(n-1); // Recursive case
}