//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
int main()
{
int n;
int *p;
printf("enter the value of n\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d\n",p+i);
}
int q=largestValue(p,n);
printf("the value of largest element is %d\n",q);

return 0;
}
int largestValue(int *p,int n)
{
int large;
large=*(p+0);
for(int i=1;i<n;i++)
{
if(large<*(p+i))
    {
     large=*(p+i);
    }
}

return large;
}
