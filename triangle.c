#include<stdio.h>
int main()
{
int n;
printf("enter rows");
scanf("%d",&n);
//printf("\n");
for(int i=0;i<=n;i++)
{
for (int j=0;j<=(n-i);j++)
printf(" ");
{
for (int k=0;k<=2*(i-1);k++)
printf("*");
printf("\n");
}
}
return 0;
}
