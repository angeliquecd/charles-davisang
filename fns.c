#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fns.h"
double avg(int *arr, double ARR_SIZE){
  int i,sum;
  sum=0.0;
  for (i=0;i<ARR_SIZE;i++){
    sum+=*(arr+i);
  }
  return sum/ARR_SIZE;
}
int copy(int *arr1, int *arr2, int ARR_SIZE){
  int i =0;
  for(i=0;i<ARR_SIZE;i++){
    *(arr2+i)=*(arr1+i);
  }
  return 0;
}
int strlength(char *s){
  return -1*(s-strchr(s,'\0'));
}
