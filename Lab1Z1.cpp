#include <iostream>

 //Лабороторная работа №1. Задание 1.
 //Основание хранится в 'n'
int main()
{
    int i, k, n = 3;
    int power (int, int);
    for (i=0; i<10; i++)
    {
        k=power(n, i);
        std::cout<<"i = "<<i<<", k = "<<k<<std::endl;
    }
}
int power(int x, int n)
{
    int i, p=1;
    for(i=1; i<=n; i++) p*=x;
    return p;
}