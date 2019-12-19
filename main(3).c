/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b;
printf("enter a no.");
scanf("%d",&a);
printf("enter a no.");
scanf("%d",&b);
printf(a!=b?(a>b?"a is greater":"b is greater"):"equal");
    return 0;
}
