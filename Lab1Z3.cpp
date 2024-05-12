#include <iostream>

void obmen1(int, int);
void obmen2(int*, int*);
void obmen3(int&, int&);

int main(){
    int a=2, b=5;
    std::cout << "до обмена:  а= "<< a <<"b="<<b<< std::endl;
    obmen1(a, b);
    std::cout << "после обмена 1:  а= "<< a <<"b="<<b<< std::endl;
    obmen2(&a, &b);
    std::cout << "после обмена 2:  а= "<< a <<"b="<<b<< std::endl;
    obmen3(a, b);
    std::cout << "после обмена 3:  а= "<< a <<"b="<<b<< std::endl;
}

void obmen1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void obmen2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void obmen3(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}