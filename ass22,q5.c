//5. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
#include<stdio.h>
int main()
{
int n;
printf("how many values you want to enter in the array\n");
scanf("%d",&n);
int *p;
p =(int*)calloc(n,sizeof(int));
printf("enter the element in the array\n");
for(int i=0;i<n;i++)
{
scanf("%d",p+i);
}
int sum=0;
for(int i=0;i<n;i++)
{
printf("%d\n",*(p+i));
sum=sum+ *(p+i);
}
printf("the sum is %d\n",sum);


return 0;
}
