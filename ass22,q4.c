//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
int main()
{
printf("enter the text");
char*p;
p=(char*)malloc(sizeof(50));
fgets(p,50,stdin);
for(int i=0;*(p+i);i++)
{
printf("%c",*(p+i));
}
return 0;
}
