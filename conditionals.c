#include<stdio.h>
int main()
{
    int a,b;
    int * ptr1 = NULL,*ptr2 = NULL;
    ptr1 = &a;
    ptr2 = &b;
    printf("Please provide input for number a\n");
    scanf("%d",ptr1);
    printf("Number a = %d\n",a);
    printf("Please provide input for number b\n");
    scanf("%d",ptr2);
    printf("Number a = %d\n",b);
    if (a>b)
    {
        printf("A is greater than B the value of A is %d and the value of b is %d",a,b);
    }
    else
    {
        printf("B is greater than A the value of A is %d and the value of b is %d",a,b);
    }
    return 0;
}