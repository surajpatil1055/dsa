#include<stdio.h>
main()
{
int i,n,sum=0;
printf("ENTER n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    printf("% d\n",i);
sum=sum+i;

}

printf("sum=% d",sum);
}
