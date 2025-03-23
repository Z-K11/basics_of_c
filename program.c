#include<stdio.h>
int main()
{
    int a,b;
    int * ptr = NULL;
    int * ptr2 = NULL;
    ptr = &a;
    ptr2 = &b;
    printf("Please Provide input for the number a \n");
    scanf("%d",ptr);
    printf("Your number is %d\n",*ptr);
    printf("Please Provide input for the number b \n");
    scanf("%d",ptr2);
    printf("Your number is %d\n",*ptr2);
    printf("The sum of the two numbers is %d\n",*ptr2+*ptr);
    return 0;
}