#include<stdio.h>
main()
{
int i,n,fact=1;
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{


printf("% d\n",i);
fact=fact*i;
}
printf("factorial=%d",fact);
}
