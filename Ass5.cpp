//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,sum=0,i;
    printf("Enter a three digit Number:");
    scanf("%d",&x);
    while(x>0)
    {
        i=x%10;
        sum=sum+i;
        x=x/10;  
    }
    printf("sum of %d",sum);
    return 0;

}