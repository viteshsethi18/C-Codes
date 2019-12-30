/*
#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
printf("enter number of rows and columns of 1st matrix");
scanf("%d%d",&r1,&c1);
printf("enter elements of 1st matrix");
for ( i=0;i<r1;i++)
  for ( j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("enter elements of 2nd matrix");
for (int i=0;i<r1;i++)
  for (int j=0;j<c1;j++)
scanf("%d",&b[i][j]);
printf("sum");
for ( i=0;i<r1;i++)
{
  for ( j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
*/
#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
printf("enter number of rows and columns of 1st matrix");
scanf("%d%d",&r1,&c1);
printf("enter elements of 1st matrix");
for ( i=0;i<r1;i++)
  for ( j=0;j<c1;j++)
scanf("%d",&a[i][j]);
for (int i=0;i<r1;i++)
{
  for (int j=0;j<c1;j++)
{
b[i][j]=a[j][i];
printf("%d\t",b[i][j]);
}
printf("\n");

}


return 0;
}


