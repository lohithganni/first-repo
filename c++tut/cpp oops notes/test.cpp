#include<iostream>
#include<cstring>
int main(){
    // char c[]="lohith";
    // char*d =c;
    // d[2]='a';
    // printf("%s",d);
    char *c=new char[7];
   
    std::strcpy(c,"lohith");
    
    std::cout<<c;
}