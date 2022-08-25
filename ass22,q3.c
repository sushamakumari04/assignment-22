//3. Write a program to calculate the sum of n numbers entered by the user using malloc
//and free.
#include<stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
int q = input(n);
printf("the sum is %d",q);

return 0;
}

int input(int n)
{
int *p;
int sum=0;
p = (int*)malloc(sizeof(n*4));
printf("enter the value %d values",n);
for(int i=0;i<n;i++)
{
scanf("%d",p+i);
}

for(int i=0;i<n;i++)
{
sum=sum+ *(p+i);
}
free(p);
p=NULL;

return sum;
}
