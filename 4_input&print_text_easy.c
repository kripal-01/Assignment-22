// 4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
char *q;
  q=  (char*)calloc(n,1);
  fflush(stdin);
fgets(q,n,stdin);
    printf("%s",q);
}