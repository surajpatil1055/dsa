#include<stdio.h>
int main()
{
float u_c,t;
printf("enter units consumed\n");
scanf("%f",&u_c);
if(u_c>=0&&u_c<=100)
{
    t=u_c*1;
    printf("total bill=%f",t);
}

else if(u_c>=100&&u_c<=200)
{
    t=u_c*1.5;
    printf("total bill=%f",t);
}

else if(u_c>=200&&u_c<=300)
{
    t=u_c*2;
    printf("total bill=%f",t);
}

}
