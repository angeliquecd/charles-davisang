#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ARR_SIZE=10;
int main(){
  int ary[ARR_SIZE];
  srand(time(NULL));
  int i;
  for (i=0;i<10;i++){
    ary[i]=rand();}
  ary[9]=0;
  for (i=0;i<10;i++){
    printf("%d\n",ary[i]);}
  int party[ARR_SIZE];
  int *partyp=party;
  int *aryp=ary;
  for(i=0;i<10;i++){
    *(partyp+i)=*(aryp+9-i);}
  for (i=0;i<10;i++){
    printf("%d\n",*(partyp+i));}
  //printf("The values are: %d\n",ary[0]);
  return 0;
}
