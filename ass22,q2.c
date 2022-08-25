//2. Write a program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("how many number of data values you want to input\n");
scanf("%d",&n);
int *p;
p =(int*)calloc(n,sizeof(int));
printf("enter the value in the array");
for(int i=0;i<n;i++)
{
scanf("%d",p+i);
}
int sum=0;
for(int i=0;i<n;i++)
{
   sum=sum + *(p+i);
}
float Average = sum/n;
printf(" the average is %f",Average);// point average is not given the correct answer

return 0;
}
