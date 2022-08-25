//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
int q=input(n);


return 0;
}
int input(int n)
{
printf("enter the value in the array");
{
 int *p;
 p=(int*)calloc(n,sizeof(int));
 for(int i=0;i<n;i++)
 {
  scanf("%d",p+i);
 }
}
printf("%d",*(p+0));//memeory leak because p is a local variable
}


