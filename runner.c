#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fns.h"
int main(){
  int ray[10];
  int i;
  for (i=0;i<10;i++){
    ray[i]=i;}
  printf("Printing first array:\n");
  for (i=0;i<10;i++){
    printf("%d:%d\n",i,ray[i]);}
  printf("\nThe average is:%f\n\n",avg(ray,10));
  printf("Printing second array:\n");
  int ray2[10];
  int a =0;
  for (i=0;i<10;i++){
    ray2[i]=a+12;
    a++;
    printf("%d:%d\n",i,ray2[i]);
  }
  printf("\nPrinting copy array (array 1 onto array 2):\n");
  copy(ray,ray2,10);
  for (i=0;i<10;i++){
    printf("%d:%d\n\n",i,ray2[i]);
  }
  char *s = "Thisis15letters";
  printf("The length of '%s' is:%d\n",s,strlength(s));
  return 0;
}
