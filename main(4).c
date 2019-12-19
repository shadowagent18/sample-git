/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b,c;
printf("enter a no.");
scanf("%d",&a);
printf("enter a no.");
scanf("%d",&b);
printf("enter a no.");
scanf("%d",&c);
printf(a!=b||b!=c?(a>b?(a>c?"a is greater":"c is greater"):(b>c?"b is greater":"c is greater")):"they are equal");
    return 0;
}
