//Write a program to print a given number without its last digit
#include<stdio.h>
int main()
{
    int num,num1;
    printf("Enter a Number =");
    scanf("%d",&num);
    num1=num/10;
    printf("Number without last digit=%d",num1);
    return 0;
    
}