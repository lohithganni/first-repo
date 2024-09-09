#include<iostream>
#include<complex>
using namespace std;
int main(){
    int a=5;
    const int& b=a;// reference to a
    a++;
    cout<<a<<b;
    return 0;
}