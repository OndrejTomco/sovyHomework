#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int arr[3];
  char brr[3];
  arr[0]=rand()%10;
  arr[1]=rand()%10;
  arr[2]=rand()%10;
  brr[0]=rand()%26+65;
  brr[1]=rand()%26+65;
  brr[2]= '\0';

  printf("KE%d%d%d%s", arr[0], arr[1], arr[2],brr );



}
