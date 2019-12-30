#include<stdio.h>
int main()
{
int n;
printf("enter no of rows");
scanf("%d",&n);
printf("\n");
for (int i=n;i>=1;i--)
{
for (int j=0;j<=2*(n-1);j++)
printf(" ");
{
for (int k=0;k<=n+1;k++)
printf("* ");
}
printf("\n");
}
return 0;
}
