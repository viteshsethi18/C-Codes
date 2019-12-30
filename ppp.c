#include<stdio.h>
int main()
{
int n,i,j,k,l;
printf("enter number of rows");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n");
for (k=n-1;k>i;k--)
printf(" ");
for (j=1;j<=i;j++)
printf(" %0d",j);
for (l=i-1;l>0;l--)
printf(" %2d",l);
//printf("\n")
}
return 0;
}
