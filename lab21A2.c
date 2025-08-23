/*Create a structure book with book title, author, publication, and price. Read data of 3
books and display.*/
#include<stdio.h>
struct book
{
  char title[50];
  char author[50];
  char publication[50];
  float price;
}b[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter a Book Title:");
        scanf("%s",b[i].title);
        printf("Enter a Book Author:");
        scanf("%s",b[i].author);
        printf("Enter a Book Publication:");
        scanf("%s",b[i].publication);
        printf("Enter a Book Price:");
        scanf("%f\n",&b[i].price);
    }
    for(i=0;i<3;i++)
    {
        printf("\nb[%d] Book Tilte:%s",i+1,b[i].title);
        printf("\nb[%d] Book Author:%s",i+1,b[i].author);
        printf("\nb[%d] Book Publication:%s",i+1,b[i].publication);
        printf("\nb[%d] Book Price:%f",i+1,b[i].price);
    }
}