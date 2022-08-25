//1. Define a function to input variable length string and store it in an array without
//memory wastage.
#include<stdio.h>
#include<stdlib.h>

void input()
{

char *q;
 q = (char*)calloc(10,sizeof(char));
 printf("enter the string");
for(int i=0;i<10;i++)
{
 scanf("%c",(q+i));

}
for(int i=0;*(q+i);i++)
{
printf("%c",*(q+i));
}


}
int main()
{
input();
return 0;
}
