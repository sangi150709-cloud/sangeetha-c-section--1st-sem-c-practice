//write a prog to calculate the percentage increase between an original value and a new value.
#include<stdio.h>
int main()
{
 float original,new;
 scanf("%f",&original);
 scanf("%f",&new);
 printf("%f",((new-original)/original)*100);
 return 0;
 }
