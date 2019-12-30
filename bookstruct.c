#include<stdio.h>
#include<string.h>
struct books
{
char title[50];
char author[50];
char subject[100];
int book_id;
};
int main()
{
struct books book1,book2;
strcpy(book1.title,"let us c");
strcpy(book1.author,"vitesh");
strcpy(book1.subject,"PDS");
book1.book_id=12345;
strcpy(book2.title,"c++");
strcpy(book2.author,"sethi");
strcpy(book2.subject,"ADS");
book2.book_id=6789;
printbook(book1);
printbook(book2);
return 0;
}

void printbook(struct books book)
{
printf("book title %s\n",book.title);
printf("book author %s\n",book.author);
printf("book subject %s\n",book.subject);
printf("book id %d\n",book.book_id);
}
