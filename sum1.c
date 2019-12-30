#include<stdio.h>
int main()
{
    int a, s;
    printf("Enter value of a: ");
    scanf("%d",&a);
    s = 0;
    while(a > 0)
    {
        s = s + (a%10);
        a = a / 10;
    }
    printf("Sum of digits: %d",s);
    return 0;
}
