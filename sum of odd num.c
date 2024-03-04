#include<stdio.h>
main()
{
int i,n,sum=0;
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("% d",i);
if(i%2!=0)
    sum=sum+i;
}
printf("sum=%d",sum);
}
