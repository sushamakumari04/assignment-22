//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int main()
{
 input();
return 0;
}
void input()
{
int*p;
p=(int*)calloc(5,sizeof(int));
for(int i=0;i<5;i++)
{
scanf("%d",p+i);
}
free(p);// now p became dangling pointer.

}
