/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.*/
#include<stdio.h>
int main()
{
    float inr,usd=76.23,x;
    printf("Enter a amout in INR:");
    scanf("%f",&inr);
    x=inr/usd;
 printf("%.2f",x);
 return 0;

}