#include <stdio.h>
int
main ()
{
  int dayno;
  printf ("enter the day no.\n");
  scanf ("%d", &dayno);
  switch (dayno)
    {
    case 1:
      printf ("\nsunday"); break;
    case 2:
      printf ("\nMonday"); break;
    case 3:
      printf ("\ntuesday"); break;
case 4:printf("\nwednesday");
    break;
    case 5:printf("\nthursday");
    break;
    case 6:printf("\nfriday");
    break;
    case 7:printf("\nsaturday");
    break;
    default:printf("wrong input");
    }
}

