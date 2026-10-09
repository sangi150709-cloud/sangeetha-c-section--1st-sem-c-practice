#include<stdio.h>
int main()
{
 float proa,prob,proc,total=0;
 
 scanf("%f%f%f",&proa,&prob,&proc);

 total=proa+prob+proc;
 printf("%f\n",total);
 printf("discount price:%f\n",(total*20)/100);
 printf("final price%f",total-((total*20)/100));
 return 0;
 
 }
 
