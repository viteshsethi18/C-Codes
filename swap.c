#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("swap=%d%d",a,b);
return 0;
}
