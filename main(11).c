/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
int a;
printf("enter the value\n");
scanf("%d",&a);
if(a%5==0&&a%7==0)
{
    printf("\ngiven no.is divisible by both 5 and 7\n");
}
else
{
    printf("given no. is not divisble by 5 and 7");
}
}

