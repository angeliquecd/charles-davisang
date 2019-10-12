double avg(int *arr, double size);
int copy(int *arr1,int *arr2, int size);
int strlength(char *p);
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
  printf("%p\n",arr1);
    printf("%p\n",arr2);
    int new[ARR_SIZE*2];
  for(i=0;i<ARR_SIZE;i++){
    *(arr2+i)=*(arr1+i);
  }
  return 0;
}
int strlength(char *s){
  return -1*(s-strchr(s,'\0'));
}
