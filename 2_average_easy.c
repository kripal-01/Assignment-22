// 2. Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
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
printf("avg is %d",sum/n);
}
