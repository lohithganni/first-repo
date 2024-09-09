 #include<cassert>
#include<iostream>
int main(){
    int j=25;
    assert(j==25);//assert takes a boolean expression and if false aborts the programm
    std::cout<<__FILE__<<"   "<<__LINE__;// macro
}