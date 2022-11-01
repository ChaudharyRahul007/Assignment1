/*Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int x,ans;
    printf("Enter a number :");
    scanf("%d",&x);
    ans = (x * 10)+9;
    printf("%d",ans);
    return 0;

}