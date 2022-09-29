#include<stdio.h>
int swap(int *a,int *b){
    int t;
    t = *a ;
    *a = *b ;
    *b = t ;
 }
int main()
{
    int a,b;
    printf("Enter the numbers to be swapped :\n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping :\n");
    printf("a = %d : b = %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping :\n");
    printf("a = %d : b = %d",a,b);
    return 0;
}