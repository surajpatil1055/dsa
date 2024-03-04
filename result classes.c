#include<stdio.h>
int main()
{
int marks;
printf("enter marks\n");
scanf("%d",&marks);
 if(marks<=39&&marks>=0)
printf("fail");
else if(marks<=59&&marks>=40)
printf("second class");
else if(marks<=79&&marks>=60)
printf("first class");
else if(marks<=100&&marks>=80)
printf("distinction");
}

