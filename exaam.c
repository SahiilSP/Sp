#include<stdio.h>
int main()
//POINTER ARITHMETIC
{
    int* p, x=10;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",*p+5);
    printf("%d\n",*p*2);
    printf("%u\n",p);
    printf("%u\n",p+5);
    printf("%u\n",p-10);
    //printf("%u",p/10); This shows error !!
    return 0;
}