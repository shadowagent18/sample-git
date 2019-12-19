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
printf("enter the year\n");
scanf("%d",&a);
if((a%4==0&&a%100!=0)||a%400==0)
{
    printf("\nleap year\n");
}
else
{
    printf("\n not a leap year");
}
}

