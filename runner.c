#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
  int ray[10];
  int i;
  for (i=0;i<10;i++){
    ray[i]=i;
  }
  for (i=0;i<10;i++){
    printf("%d:%d\n\n",i,ray[i]);
  }
  printf("The average is:%lf\n\n",avg(ray,10));
  int ray2[10];
  for (i=0;i<10;i++){
    ray2[i]=i+12;
  }
  copy(ray,ray2,10);
  for (i=0;i<20;i++){
    printf("%d:%d\n\n",i,ray2[i]);
  }
  char *s = "Thisis15letters";
  printf("Length:%d\n",strlength(s));
  return 0;
}
