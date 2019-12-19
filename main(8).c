/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int a,b;
    if(argc<0)
    printf("\n Invalid no.of Args");
    else
    {
        a=atoi(argv[1]);
        b=atoi(argv[2]);
        printf("\n sum is %d",a+b);
    }
}

