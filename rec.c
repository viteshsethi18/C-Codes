#include<stdio.h>
int rec(int);
int main()
{
int a,b;
printf("Enter number: ");
scanf("%d", &a);
b=rec(a);
printf(b);
return 0;
}
int rec(int x)
{
int v;
if (v==1)
return (1);
else
return (v*fact(v-1));
}
