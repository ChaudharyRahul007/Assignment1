//1. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int num,num1;
    printf("Enter a number:");
    scanf("%d",&num);
    num1=num%10;
    printf("%d unit digit is %d",num,num1);
    return 0;
}