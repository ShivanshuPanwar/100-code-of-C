//Write a program to print the average of 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("avg of three numbers:%d",(a+b+c)/3);
    return 0;
}