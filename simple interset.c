#include<stdio.h>
    int main()
{


float p,t,r,si,t_a;
printf("enter p,t,r\n");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
printf("simple interest=%f",si);
t_a=si+p;
printf("total amount=%f",t_a);

}
