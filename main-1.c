#include<stdio.h>
int main ()
{
    int a,b,d,c;
    int total;

    printf("enter initial balance :");
    scanf("%d",&a);
    printf("enter depost amount :");
    scanf("%d",&b);
    printf("enter withdrawal amount :");
    scanf("%d",&d);
    c  = a+b;
    total = c-d;
    printf("UPDATED BALANCE :%d",total);
    
    return 0;
}