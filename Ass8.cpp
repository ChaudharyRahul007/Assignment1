//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);
    if(x&1)
        printf("Number is Odd");
        else
        printf("Number is Even");
        return 0;
}
