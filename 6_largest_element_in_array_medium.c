//6. Write a program in C to find the largest element using Dynamic Memory Allocation
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
}
  for(i=0;i<n;i++)
{
	int temp=0;
   if(*(q)<*(q+i))
   {
   	  temp=*q;
   	 *q = *(q+i);
   	 *(q+i)=temp;
   }
    
     
     

}
printf("\n%d\n",*q);
  return 0;  
}
