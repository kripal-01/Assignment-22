// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
int *q,sum=0,avg;
  q=  (int*)calloc(n,4);
  for(i=0;i<n;i++)
{

     scanf("%d",(q+i));
     sum+= *(q+i);

}
    printf("sum is %d",sum);
}

