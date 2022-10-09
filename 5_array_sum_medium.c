//5. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.

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
     printf("\nsum is %d\n",sum);
     

}
    
}

