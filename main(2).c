/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
printf("enter a no.");
scanf("%d",&a);
printf(a!=0?(a>0?"positive":"negative"):"neutral");
    return 0;
}
