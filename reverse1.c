#include <stdio.h>
int main(void)
{
int num, dig, rev=0;
printf(“Enter your number”);
scanf(“%d”,&num);
do
{
dig=num % 10;
rev=rev*10+dig; 
num/=10;
}
while(num!=0);


printf(“Reverse of the number=%d”,rev);
return 0;
}
