//10. Find out the maximum and minimum from an array using dynamic memory allocation
//in C.
#include<stdio.h>
int main()
{
int n;
printf("Enter how much value you want to store in array");
scanf("%d",&n);
int *p;
p =(int*)calloc(n,sizeof(int));
printf("enter the value in the array");
for(int i=0;i<n;i++)
{
scanf("%d",p+i);
}
int l=largestValue(p,n);
printf("The largest element in the array is %d\n",l);
int s=smallestValue(p,n);
printf("The smallest element in the array is %d\n",s);

return 0;
}
int largestValue(int*p ,int n)
{
int large;
large= *(p+0);
for(int i=1;i<n;i++)
{
if(large < *(p+i))
{
  large= *(p+i);
}
}
 return large;
}

int smallestValue(int*p ,int n)
{
int small;
small = *(p+0);
for(int i=1;i<n;i++)
{
if(small > *(p+i))
{
  small= *(p+i);
}
}
 return small;
}
