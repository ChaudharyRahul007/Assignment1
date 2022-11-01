//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int x,y,z;
    float f;
    char ch;
    double d;
    x=sizeof(ch);
    printf("x=%d\n",x);
    y=sizeof(f);
    printf("y=%d\n",y);
    z=sizeof(d);
    printf("z=%d\n",z);

    return 0;

}