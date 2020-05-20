//C program to perform operations in calculator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers to add\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of two numbers is %d\n",c);

    printf("Enter two numbers to subtract\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Subtraction of two numbers is %d\n",c);

    printf("Enter two numbers to multiply");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Multiplication of two numbers is %d\n",c);

    printf("Enter two numbers to divide");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division of two numbers is %d\n",c);

    printf("enter two numbers for remainder");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("Remainder of two numbers is %d\n",c);

    return 0;
}
