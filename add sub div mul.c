#include<stdio.h>
main()
{
int ch;
float n1,n2,sum,sub,mul,div;
printf("enter n1,n2,ch\n");
scanf("%f%f%d",&n1,&n2,&ch);
switch(ch)
{

 case 1:   sum=n1+n2;
    printf("sum=%f",sum);
break;

 case 2 :   sub=n1-n2;
    printf("sub=%f",sub);
break;

 case 3:   mul=n1*n2;
    printf("mul=%f",mul);
break;

 case 4:   div=n1/n2;
    printf("div=%f",div);
break;


}
}
