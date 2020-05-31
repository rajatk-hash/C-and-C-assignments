#include<stdio.h>

int main()

{

int number=0;

int sum=0;

do

{

sum+=number;

printf("Enter a number: ");

scanf("%d",&number);

}

while(number!=0);

printf("sum=%d",sum);

}


