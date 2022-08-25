//1. Define a function to input variable length string and store it in an array without
//memory wastage.
#include<stdio.h>
#include<stdlib.h>
 int* input()
 {
 printf("enter the string");
 char *p;
 p=(char*)malloc(sizeof(20));
 fgets(p,20,stdin);
 char arr[20];
 for(int i=0;*(p+i);i++)
    {
     arr[i]=*(p+i);
    }
     for(int i=0;arr[i]!='\0';i++)
    {
     printf("%c",arr[i]);
    }

 free(p);
 p=NULL;


 }

int main()
{
input();
return 0;
}
