//9. Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
#include<stdio.h>
int main()
{
int n ;
printf("enter the how much size you want to allocated");
scanf("%d",&n);

int*p;
p=(int*)malloc(sizeof(n));
//if memory is not allocated in that case be reallocate the memory;
int *q;
q = realloc(p,n);
return 0;
}
