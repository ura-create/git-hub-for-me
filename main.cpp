#include<iostream>

int main(){
    int a = 8;
    int *ptr = &a;
    *ptr = 2;
    std::cout<<*ptr<<std::endl;
    int &ref = a;
    a = 5;
    std::cout<<a<<" and "<<*ptr<<std::endl;
}