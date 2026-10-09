//write a prog to calculate  the final salary after adding a given bonus percentage.
#include <stdio.h>
int main()
{ 
 int salary;
 scanf("%d",&salary);
 printf("%d\n",(salary*5)/100);
 printf("%d",salary+(salary*5)/100);
 return 0;
 }
