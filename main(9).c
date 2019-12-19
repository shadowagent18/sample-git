/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
int a,b,avg,total;
  printf("enter marks");
  scanf("%d",&a);
  printf("enter marks");
  scanf("%d",&b);
 total=a+b;
 avg=total/2;
  if (avg>90)
  {
      printf("o grade");
  }
   else if (avg>80&&avg<=89)
  {
      printf("a grade");
  }
  else if (avg>70&&avg<=79)
  {
      printf("b+ grade");
  }
  else if (avg>60&&avg<=69)
  {
      printf("b grade");
  }
  else if (avg>40&&avg<=59)
  {
      printf("c grade");
  }
    else 
  {
      printf("fail");
  }
}

