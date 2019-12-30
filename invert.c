#include<stdio.h>
int main()
{
int n,m;
printf("enter rows");
scanf("%d",&n);
printf("\n");
m=n;
for(int i=1;i<=n,m>0;i++)
{
for (int j=1;j<i;j++)
printf(" ");

for (int k=1;k<=m;k++)
printf("*");

printf("\n");
m=m-2;
}
return 0;
}
