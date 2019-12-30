#include<stdio.h>
#include<string.h>
#include<stdio.h>
struct student
{
int id;
char name[50];
float percentage;
};
int main()
{
int i;
struct student record[2];
record[0].id=1;
strcpy(record[0].name,"raju");
record[0].percentage=50.5;

record[1].id=2;
strcpy(record[1].name,"pushkar");
record[1].percentage=60;

for(i=0;i<=2;i++)
{

printf("records of student %d\n",i+1);
printf("id is %d\n",record[i].id);
printf("name is %s\n",record[i].name);
printf("percentage is %f\n",record[i].percentage);
return 0;
}
}





