#include<stdio.h>
int main ()
{
    int a;
    int b,c;
    int sum;

    printf("ENTER TOTAL MARKS = ");
    scanf("%d",&a);
     printf("ENTER MARKS OBTAINED = ");
    scanf("%d",&b);

    sum = a/b;
    c = sum*100;

    printf("PERCENTAGE = %d",c);


    return 0;
}