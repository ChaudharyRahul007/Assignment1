/*. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
//8765#include<math.h>
int main()
{
    long int x ,ans=0;
    printf("Enter A Numbers:");
    scanf("%d",&x);
    x = x/10;
    ans =x*10;
    printf("%d",ans);
    return 0;
}