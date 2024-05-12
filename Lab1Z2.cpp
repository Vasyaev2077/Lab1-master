#define PR(x) printf("x=%u, *x=%d, &x=%u/n",x,*x,&x)
#include <cstdio>
// Лабороторная работа №1. Задание 2.

// Решение для типа int
int main1() {
    int mas[]={100, 200, 300};
    int *ptr1, *ptr2;
    ptr1=mas;
    ptr2=&mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%lld/n", ptr2-ptr1);
}
// Решение для типа  float
int main2() {
    float mas[]={55.0f, -55.5f, 99.994524f};
    float *ptr1, *ptr2;
    ptr1=mas;
    ptr2=&mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%lld/n", ptr2-ptr1);
}
// Решение для типа char
int main3() {
    char mas[]={'a', 's', 'f'};
    char *ptr1, *ptr2;
    ptr1=mas;
    ptr2=&mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%lld/n", ptr2-ptr1);
}