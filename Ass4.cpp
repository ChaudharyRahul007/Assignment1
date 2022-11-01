#include<stdio.h>
int main()
{
    int a=20,b=10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap no a=%d and b=%d",a,b);
    printf("\n");
    int c=30,d=50;
    c=c*d;
    d=c/d;
    c=c/d;
    printf("swap no c=%d and d=%d",a,b);
   printf("\n");
   int e=40 ,f=50;
   e=e^f;
   f=e^f;
   e=e^f;
   printf("swap no e=%d and f=%d",e,f);
   return 0;

}