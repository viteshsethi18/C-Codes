#include<stdio.h>
int pal(int);
int main()
{
int n,m;
printf("enter a number to check");
scanf("%d",&n);
m=pal(n);

if (n==m)
printf("number is palindrome");

else
printf("number is not palindrome");

return 0;

}
int pal(int a)
{
int rev,sum=0;
while(a>0)
{
rev=rev%10;
sum=(sum*10)+rev;
a=a/10;
}
return sum;
}

