// 1. Define a function to input variable length string and store it in an array without
// memory wastage
#include<stdio.h>
 void f1()
{
    int L;
    printf("enter size ");
    scanf("%d",&L);
    char *q;
    q= (char*)malloc(sizeof(char)*20);
    printf("enter text\n");
    fflush(stdin);
    fgets(q,20,stdin);
    printf("%s",q);

}
    int main()
{
    f1();
    /* code */
    return 0;
}
